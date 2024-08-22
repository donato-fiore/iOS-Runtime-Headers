// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMCONTAINER_H
#define MCMCONTAINER_H

@class NSString, NSUUID, NSDictionary, NSURL;

#import <Foundation/Foundation.h>


@interface MCMContainer : NSObject {
    NSString *_identifier;
    NSUUID *_uuid;
    NSString *_personaUniqueString;
    NSInteger _containerClass;
    *container_object_s _thisContainer;
}


@property (readonly, nonatomic) NSInteger containerClass;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDictionary *info;
@property (readonly, nonatomic) NSString *personaUniqueString;
@property (readonly, nonatomic, getter=isTemporary) BOOL temporary;
@property (readonly, nonatomic) *container_object_s thisContainer;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSUUID *uuid;


+(NSInteger)typeContainerClass;
+(id)containerWithIdentifier:(id)arg0 createIfNecessary:(BOOL)arg1 existed:(*BOOL)arg2 error:(*id)arg3 ;
+(id)containerWithIdentifier:(id)arg0 error:(*id)arg1 ;
+(id)temporaryContainerWithIdentifier:(id)arg0 existed:(*BOOL)arg1 error:(*id)arg2 ;
-(BOOL)_obj1:(id)arg0 isEqualToObj2:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToContainer:(id)arg0 ;
-(BOOL)recreateDefaultStructureWithError:(*id)arg0 ;
-(BOOL)regenerateDirectoryUUIDWithError:(*id)arg0 ;
-(NSUInteger)diskUsageWithError:(*id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)destroyContainerWithCompletion:(id)arg0 ;
-(id)infoValueForKey:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithIdentifier:(id)arg0 createIfNecessary:(BOOL)arg1 existed:(*BOOL)arg2 temp:(BOOL)arg3 error:(*id)arg4 ;
-(id)initWithIdentifier:(id)arg0 path:(id)arg1 uniquePathComponent:(id)arg2 uuid:(id)arg3 personaUniqueString:(id)arg4 uid:(unsigned int)arg5 error:(*id)arg6 ;
-(struct container_object_s *)getLowLevelContainerObject;
-(void)_errorOccurred;
-(void)dealloc;
-(void)markDeleted;


@end


#endif
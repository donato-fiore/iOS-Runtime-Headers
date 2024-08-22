// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MICONTAINER_H
#define MICONTAINER_H

@class NSURL, NSString;

#import <Foundation/Foundation.h>


@interface MIContainer : NSObject

@property (readonly, nonatomic) *container_object_s container; // ivar: _container
@property (nonatomic) NSUInteger containerClass; // ivar: _containerClass
@property (readonly, nonatomic) NSURL *containerURL; // ivar: _containerURL
@property (readonly, nonatomic) NSString *debugDescriptionForContainer;
@property (nonatomic) NSUInteger diskUsage; // ivar: _diskUsage
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isTransient; // ivar: _isTransient
@property (readonly, nonatomic) NSString *personaUniqueString; // ivar: _personaUniqueString
@property (nonatomic) NSUInteger status; // ivar: _status


+(?)_deleteContainers:(?)arg0 count:(?)arg1 waitForDeletionerror;
+(BOOL)removeContainers:(id)arg0 waitForDeletion:(BOOL)arg1 error:(*id)arg2 ;
+(id)_bundleContainerForIdentifier:(id)arg0 error:(*id)arg1 ;
+(id)_containersForIdentifier:(id)arg0 parentIdentifier:(id)arg1 groupContainerIdentifier:(id)arg2 ofContentClass:(NSUInteger)arg3 forPersona:(id)arg4 error:(*id)arg5 ;
+(id)allContainersForIdentifier:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
+(id)containerWithIdentifier:(id)arg0 ofContentClass:(NSUInteger)arg1 createIfNeeded:(BOOL)arg2 created:(*BOOL)arg3 error:(*id)arg4 ;
+(id)containerWithIdentifier:(id)arg0 parentIdentifier:(id)arg1 ofContentClass:(NSUInteger)arg2 createIfNeeded:(BOOL)arg3 created:(*BOOL)arg4 error:(*id)arg5 ;
+(id)containersForIdentifier:(id)arg0 groupContainerIdentifier:(id)arg1 ofContentClass:(NSUInteger)arg2 forPersona:(id)arg3 createIfNeeded:(BOOL)arg4 error:(*id)arg5 ;
+(id)containersForIdentifier:(id)arg0 parentIdentifier:(id)arg1 groupContainerIdentifier:(id)arg2 ofContentClass:(NSUInteger)arg3 forPersona:(id)arg4 createIfNeeded:(BOOL)arg5 error:(*id)arg6 ;
+(id)containersWithClass:(NSUInteger)arg0 error:(*id)arg1 ;
+(id)containersWithClass:(NSUInteger)arg0 personaUniqueString:(id)arg1 error:(*id)arg2 ;
+(id)groupContainerURLsForBundleIdentifier:(id)arg0 persona:(id)arg1 error:(*id)arg2 ;
+(id)tempContainerWithIdentifier:(id)arg0 ofContentClass:(NSUInteger)arg1 error:(*id)arg2 ;
+(id)tempContainerWithIdentifier:(id)arg0 parentIdentifier:(id)arg1 ofContentClass:(NSUInteger)arg2 error:(*id)arg3 ;
+(struct container_object_s *)_copyContainerForIdentifier:(id)arg0 parentIdentifier:(id)arg1 ofContentClass:(NSUInteger)arg2 forPersona:(id)arg3 transient:(BOOL)arg4 create:(BOOL)arg5 created:(*BOOL)arg6 error:(*id)arg7 ;
+(struct container_object_s *)_copyContainerForSerializedReference:(id)arg0 matchingWithOptions:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)_deriveContainerStatusWithError:(*id)arg0 ;
-(BOOL)_doInitConsumingContainer:(struct container_object_s *)arg0 error:(*id)arg1 ;
-(BOOL)_refreshContainerMetadataWithError:(*id)arg0 ;
-(BOOL)_replaceExistingContainer:(id)arg0 replacementReason:(NSUInteger)arg1 waitForDeletion:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)captureStoreDataFromDirectory:(id)arg0 doCopy:(BOOL)arg1 failureIsFatal:(BOOL)arg2 withError:(*id)arg3 ;
-(BOOL)makeContainerLiveReplacingContainer:(id)arg0 reason:(NSUInteger)arg1 waitForDeletion:(BOOL)arg2 withError:(*id)arg3 ;
-(BOOL)makeContainerLiveWithError:(*id)arg0 ;
-(BOOL)purgeContentWithError:(*id)arg0 ;
-(BOOL)recreateDefaultStructureWithError:(*id)arg0 ;
-(BOOL)regenerateDirectoryUUIDWithError:(*id)arg0 ;
-(BOOL)removeUnderlyingContainerWaitingForDeletion:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)setInfoValue:(id)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(id)description;
-(id)infoValueForKey:(id)arg0 error:(*id)arg1 ;
-(id)initWithContainer:(struct container_object_s *)arg0 error:(*id)arg1 ;
-(id)initWithContainerURL:(id)arg0 ;
-(id)initWithToken:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(void)dealloc;


@end


#endif
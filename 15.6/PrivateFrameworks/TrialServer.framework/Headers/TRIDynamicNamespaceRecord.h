// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIDYNAMICNAMESPACERECORD_H
#define TRIDYNAMICNAMESPACERECORD_H

@class TRIAppContainer, NSURL, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TRIDynamicNamespaceRecord : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) TRIAppContainer *appContainer; // ivar: _appContainer
@property (readonly, nonatomic) int cloudKitContainer; // ivar: _cloudKitContainer
@property (readonly, nonatomic) unsigned int compatibilityVersion; // ivar: _compatibilityVersion
@property (readonly, nonatomic) NSURL *defaultsFileURL; // ivar: _defaultsFileURL
@property (readonly, nonatomic) BOOL hasFetched; // ivar: _hasFetched
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSString *teamId; // ivar: _teamId


+(BOOL)supportsSecureCoding;
+(id)dynamicNamespaceRecordWithName:(id)arg0 teamId:(id)arg1 appContainer:(id)arg2 cloudKitContainer:(int)arg3 compatibilityVersion:(unsigned int)arg4 defaultsFileURL:(id)arg5 hasFetched:(BOOL)arg6 ;
+(void)load;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDynamicNamespaceRecord:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithReplacementAppContainer:(id)arg0 ;
-(id)copyWithReplacementCloudKitContainer:(int)arg0 ;
-(id)copyWithReplacementCompatibilityVersion:(unsigned int)arg0 ;
-(id)copyWithReplacementDefaultsFileURL:(id)arg0 ;
-(id)copyWithReplacementHasFetched:(BOOL)arg0 ;
-(id)copyWithReplacementName:(id)arg0 ;
-(id)copyWithReplacementTeamId:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 teamId:(id)arg1 appContainer:(id)arg2 cloudKitContainer:(int)arg3 compatibilityVersion:(unsigned int)arg4 defaultsFileURL:(id)arg5 hasFetched:(BOOL)arg6 ;
-(void)_swizzledEncodeWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
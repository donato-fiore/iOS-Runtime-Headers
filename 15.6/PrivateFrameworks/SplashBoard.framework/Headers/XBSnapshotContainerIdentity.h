// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef XBSNAPSHOTCONTAINERIDENTITY_H
#define XBSNAPSHOTCONTAINERIDENTITY_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface XBSnapshotContainerIdentity : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *bundleContainerPath; // ivar: _bundleContainerPath
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy, nonatomic) NSString *bundlePath; // ivar: _bundlePath
@property (readonly, copy, nonatomic) NSString *dataContainerPath; // ivar: _dataContainerPath
@property (readonly, copy, nonatomic) NSString *snapshotContainerPath; // ivar: _snapshotContainerPath


+(id)identityForApplicationInfo:(id)arg0 ;
+(id)identityForApplicationRecord:(id)arg0 ;
+(id)identityForBundleProxy:(id)arg0 ;
+(id)identityForCompatibilityInfo:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithBundleIdentifier:(id)arg0 bundlePath:(id)arg1 dataContainerPath:(id)arg2 bundleContainerPath:(id)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)snapshotContainerPathForGroupID:(id)arg0 ;
-(id)snapshotContainerPathForSnapshot:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif
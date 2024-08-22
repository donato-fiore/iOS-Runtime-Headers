// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef XBSNAPSHOTMANIFESTIDENTITY_H
#define XBSNAPSHOTMANIFESTIDENTITY_H

@class NSString;
@protocol NSCopying, XBSnapshotManifestStore;

#import <Foundation/Foundation.h>


@interface XBSnapshotManifestIdentity : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy, nonatomic) NSString *defaultGroupIdentifier;
@property (readonly, copy, nonatomic) NSObject<XBSnapshotManifestStore> *store; // ivar: _store


+(id)identityWithBundleIdentifier:(id)arg0 store:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithBundleIdentifier:(id)arg0 store:(id)arg1 ;


@end


#endif
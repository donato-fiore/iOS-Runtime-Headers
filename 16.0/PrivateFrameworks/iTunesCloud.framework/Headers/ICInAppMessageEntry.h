// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICINAPPMESSAGEENTRY_H
#define ICINAPPMESSAGEENTRY_H

@class NSMutableDictionary, NSString, NSDictionary;
@protocol NSCopying, NSSecureCoding, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ICIAMApplicationMessage.h"

@interface ICInAppMessageEntry : NSObject <NSCopying, NSSecureCoding>

 {
    NSMutableDictionary *_metadata;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_resourceCache;
}


@property (readonly, nonatomic) ICIAMApplicationMessage *applicationMessage; // ivar: _applicationMessage
@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (nonatomic) BOOL didCacheRequiredResources; // ivar: _didCacheRequiredResources
@property (nonatomic) BOOL isBadgingApplication; // ivar: _isBadgingApplication
@property (readonly, nonatomic) NSDictionary *metadata;
@property (nonatomic) BOOL shouldDownloadResources; // ivar: _shouldDownloadResources


+(BOOL)supportsSecureCoding;
-(id)allCachedResourceLocations;
-(id)cachedLocationForResourceWithIdentifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithApplicationMessage:(id)arg0 bundleIdentifier:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)clearCachedResources;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setCacheLocation:(id)arg0 forResourceWithIdentifier:(id)arg1 ;
-(void)updateMetadataValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif
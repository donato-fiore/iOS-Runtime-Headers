// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPCASSISTANTPLAYBACKQUEUE_H
#define MPCASSISTANTPLAYBACKQUEUE_H

@class NSString, NSDictionary, ICUserIdentity;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MPCAssistantPlaybackQueue : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *contextID; // ivar: _contextID
@property (copy, nonatomic) NSString *featureName; // ivar: _featureName
@property (copy, nonatomic) NSString *homeKitUserIdentifier; // ivar: _homeKitUserIdentifier
@property (copy, nonatomic) NSString *queueGroupingID; // ivar: _queueGroupingID
@property (nonatomic) BOOL shouldImmediatelyStartPlayback; // ivar: _shouldImmediatelyStartPlayback
@property (nonatomic) BOOL shouldOverrideManuallyCuratedQueue; // ivar: _shouldOverrideManuallyCuratedQueue
@property (copy, nonatomic) NSString *siriAssetInfo; // ivar: _siriAssetInfo
@property (copy, nonatomic) NSString *siriRecommendationID; // ivar: _siriRecommendationID
@property (copy, nonatomic) NSDictionary *siriWHAMetricsInfo; // ivar: _siriWHAMetricsInfo
@property (readonly, nonatomic) BOOL supportedOnCurrentPlatform;
@property (copy, nonatomic) ICUserIdentity *userIdentity; // ivar: _userIdentity


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContextID:(id)arg0 ;
-(struct _MRSystemAppPlaybackQueue *)createRemotePlaybackQueue;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
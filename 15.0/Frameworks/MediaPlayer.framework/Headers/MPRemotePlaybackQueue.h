// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPREMOTEPLAYBACKQUEUE_H
#define MPREMOTEPLAYBACKQUEUE_H

@class NSString, NSDictionary, ICUserIdentity;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MPRemotePlaybackQueue : NSObject <NSSecureCoding>

 {
    *_MRSystemAppPlaybackQueue _mediaRemotePlaybackQueue;
}


@property (readonly, nonatomic) *_MRSystemAppPlaybackQueue _mediaRemotePlaybackQueue;
@property (readonly, copy, nonatomic) NSString *featureName;
@property (readonly, nonatomic) NSDictionary *mediaRemoteOptions; // ivar: _mediaRemoteOptions
@property (readonly, copy, nonatomic) NSString *queueGroupingID; // ivar: _queueGroupingID
@property (nonatomic) NSInteger replaceIntent;
@property (nonatomic, getter=isRequestingImmediatePlayback) BOOL requestingImmediatePlayback;
@property (nonatomic) BOOL shouldOverrideManuallyCuratedQueue;
@property (readonly, copy, nonatomic) NSString *siriAssetInfo;
@property (copy, nonatomic) NSString *siriRecommendationIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *siriWHAMetricsInfo;
@property (readonly, nonatomic) ICUserIdentity *userIdentity; // ivar: _userIdentity
@property (copy, nonatomic) NSDictionary *userInfo;


+(BOOL)supportsSecureCoding;
+(id)queueWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue *)arg0 ;
+(id)queueWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue *)arg0 options:(id)arg1 ;
+(void)registerRemotePlaybackQueueClass:(Class)arg0 forPlaybackQueueType:(int)arg1 ;
-(BOOL)verifyWithError:(*id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue *)arg0 options:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
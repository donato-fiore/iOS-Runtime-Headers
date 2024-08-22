// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPPLAYBACKCONTEXT_H
#define MPPLAYBACKCONTEXT_H

@class NSString, NSData, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "MPAVItem.h"
#import "MPMusicPlayerQueueDescriptor.h"

@interface MPPlaybackContext : NSObject <NSSecureCoding, NSCopying>

 {
    MPAVItem *_playerCurrentItem;
}


@property (nonatomic) NSInteger actionAfterQueueLoad; // ivar: _actionAfterQueueLoad
@property (readonly, nonatomic) BOOL containsRestorableContent;
@property (copy, nonatomic) NSString *playActivityFeatureName; // ivar: _playActivityFeatureName
@property (copy, nonatomic) NSString *playActivityQueueGroupingID; // ivar: _playActivityQueueGroupingID
@property (copy, nonatomic) NSData *playActivityRecommendationData; // ivar: _playActivityRecommendationData
@property (copy, nonatomic) MPMusicPlayerQueueDescriptor *queueDescriptor; // ivar: _queueDescriptor
@property (nonatomic) NSInteger queueEndAction; // ivar: _queueEndAction
@property (nonatomic) NSInteger repeatType; // ivar: _repeatType
@property (copy, nonatomic) NSString *sessionIdentifier; // ivar: _sessionIdentifier
@property (readonly, nonatomic) BOOL shouldBecomeActive;
@property (nonatomic) NSInteger shuffleType; // ivar: _shuffleType
@property (copy, nonatomic) NSString *siriAssetInfo; // ivar: _siriAssetInfo
@property (copy, nonatomic) NSString *siriReferenceIdentifier; // ivar: _siriReferenceIdentifier
@property (copy, nonatomic) NSDictionary *siriWHAMetricsInfo; // ivar: _siriWHAMetricsInfo
@property (readonly, nonatomic, getter=isSupported) BOOL supported;
@property (nonatomic) BOOL supportsAccountRectification; // ivar: _supportsAccountRectification


+(BOOL)supportsAutoPlay;
+(BOOL)supportsSecureCoding;
+(Class)queueFeederClass;
-(BOOL)isCompatibleWithReplacementContext:(id)arg0 incompatibleReason:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionComponents;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)clearStartItem;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
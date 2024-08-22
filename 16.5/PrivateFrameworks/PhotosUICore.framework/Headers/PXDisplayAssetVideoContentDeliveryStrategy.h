// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXDISPLAYASSETVIDEOCONTENTDELIVERYSTRATEGY_H
#define PXDISPLAYASSETVIDEOCONTENTDELIVERYSTRATEGY_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PXDisplayAssetVideoContentDeliveryStrategy : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) BOOL isAudioAllowed; // ivar: _isAudioAllowed
@property (nonatomic) BOOL isNetworkAccessAllowed; // ivar: _isNetworkAccessAllowed
@property (nonatomic) BOOL isStreamingAllowed; // ivar: _isStreamingAllowed
@property (nonatomic) NSInteger quality; // ivar: _quality
@property (nonatomic) ? segmentTimeRange; // ivar: _segmentTimeRange
@property (nonatomic) CGSize targetSize; // ivar: _targetSize


+(id)defaultStreamingMediumQualityStrategy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif
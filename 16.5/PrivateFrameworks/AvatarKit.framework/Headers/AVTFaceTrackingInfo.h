// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTFACETRACKINGINFO_H
#define AVTFACETRACKINGINFO_H


#import <Foundation/Foundation.h>


@interface AVTFaceTrackingInfo : NSObject {
    ? _trackingData;
    ? _rawTransform;
}


@property (readonly, nonatomic) BOOL hasFaceTrackingData;
@property (readonly, nonatomic) ? rawTransform;
@property (readonly, nonatomic) CGFloat timestamp;
@property (readonly) *? trackingData;
@property (readonly) *? trackingData;


+(id)dataWithARFrame:(id)arg0 captureOrientation:(NSInteger)arg1 interfaceOrientation:(NSInteger)arg2 ;
+(id)trackingInfoWithARFrame:(id)arg0 inputOrientation:(NSInteger)arg1 outputOrientation:(NSInteger)arg2 ;
+(id)trackingInfoWithARFrame:(id)arg0 worldAlignment:(NSInteger)arg1 captureOrientation:(NSInteger)arg2 interfaceOrientation:(NSInteger)arg3 ;
+(id)trackingInfoWithTrackingData:(struct ? *)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTFACETRACKINGINFO_H
#define AVTFACETRACKINGINFO_H

@class ARFrame;

#import <Foundation/Foundation.h>


@interface AVTFaceTrackingInfo : NSObject {
    ? _trackingData;
    ARFrame *_arFrame;
    CGFloat _timestamp;
}


@property (readonly, nonatomic) ARFrame *arFrame;
@property (readonly, nonatomic) BOOL hasFaceTrackingData;
@property (readonly, nonatomic) CGFloat timestamp;
@property (readonly) *? trackingData;


+(id)trackingInfoWithARFrame:(id)arg0 inputOrientation:(NSInteger)arg1 outputOrientation:(NSInteger)arg2 ;
+(id)trackingInfoWithARFrame:(id)arg0 worldAlignment:(NSInteger)arg1 captureOrientation:(NSInteger)arg2 interfaceOrientation:(NSInteger)arg3 ;
-(void)discardARFrame;


@end


#endif
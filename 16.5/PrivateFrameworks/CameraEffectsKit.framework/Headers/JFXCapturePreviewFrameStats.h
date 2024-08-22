// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JFXCAPTUREPREVIEWFRAMESTATS_H
#define JFXCAPTUREPREVIEWFRAMESTATS_H


#import <Foundation/Foundation.h>


@interface JFXCapturePreviewFrameStats : NSObject {
    CGFloat _frameTimes;
}


@property (nonatomic) BOOL dropped; // ivar: _dropped
@property (readonly, nonatomic) *CGFloat times;


-(void)printLabels;
-(void)printStats;


@end


#endif
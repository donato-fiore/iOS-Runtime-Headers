// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JFXCAPTUREPREVIEWSTATS_H
#define JFXCAPTUREPREVIEWSTATS_H

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "JFXCapturePreviewFrameStats.h"

@interface JFXCapturePreviewStats : NSObject {
    JFXCapturePreviewFrameStats *_runningAverage;
    NSMutableArray *_stats;
    NSObject<OS_dispatch_queue> *_q;
}


@property (retain, nonatomic) NSString *name; // ivar: _name


-(id)add:(id)arg0 ;
-(id)init;
-(id)runningAverage;
-(void)_print_NoLock;
-(void)clear;
-(void)print;
-(void)printSync;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INPAINTINGEXECUTIONCONTEXT_H
#define INPAINTINGEXECUTIONCONTEXT_H

@class NSMutableArray, NSString;

#import <Foundation/Foundation.h>


@interface InpaintingExecutionContext : NSObject {
    NSMutableArray *processingResolutions;
    NSMutableArray *executionTimes;
}


@property int lastInpaintingModeUsed; // ivar: _lastInpaintingModeUsed
@property (retain) NSString *lastModelResourceUsed; // ivar: _lastModelResourceUsed
@property int lastNumberOfTilesUsed; // ivar: _lastNumberOfTilesUsed


-(CGFloat)lastExecutionTime;
-(id)CIImageProcessorDigestObject;
-(id)executionTimesLog;
-(id)init;
-(id)processingResolutionsLog;
-(int)filterProcessingCount;
-(int)lastProcessingResolution;
-(void)appendProcessingResolution:(int)arg0 andTime:(CGFloat)arg1 ;
-(void)dealloc;


@end


#endif
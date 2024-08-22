// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDRAWINGPALETTESTATISTICSEVENTLOGGER_H
#define PKDRAWINGPALETTESTATISTICSEVENTLOGGER_H

@class NSString;
@protocol PKDrawingPaletteStatistics;

#import <Foundation/Foundation.h>


@interface PKDrawingPaletteStatisticsEventLogger : NSObject <PKDrawingPaletteStatistics>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat lastHandwritingToolUsedOverDrawingAttachmentTimestamp; // ivar: _lastHandwritingToolUsedOverDrawingAttachmentTimestamp
@property (nonatomic) CGFloat lastInkingToolUsedOverNonDrawingAttachmentTimestamp; // ivar: _lastInkingToolUsedOverNonDrawingAttachmentTimestamp
@property (readonly) Class superclass;


-(void)recordHandwritingToolSelected;
-(void)recordHandwritingToolUsedOverDrawingAttachmentWithTimestamp:(CGFloat)arg0 ;
-(void)recordInkingToolUsedOverNonDrawingAttachmentWithTimestamp:(CGFloat)arg0 ;


@end


#endif
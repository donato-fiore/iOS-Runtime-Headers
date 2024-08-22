// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFWIDGETCONTROLLER_H
#define MFWIDGETCONTROLLER_H

@class NSString, CHSTimelineController;
@protocol EFLoggable, EFSignpostable;

#import <Foundation/Foundation.h>


@interface MFWidgetController : NSObject <EFLoggable, EFSignpostable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger signpostID;
@property (readonly) Class superclass;
@property (retain, nonatomic) CHSTimelineController *timelineController; // ivar: _timelineController


+(id)log;
+(id)scheduler;
+(id)sharedController;
+(id)signpostLog;
-(id)init;
-(void)reloadTimelinesWithReason:(id)arg0 ;


@end


#endif
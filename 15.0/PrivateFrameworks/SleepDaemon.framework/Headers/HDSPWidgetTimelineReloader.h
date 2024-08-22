// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSPWIDGETTIMELINERELOADER_H
#define HDSPWIDGETTIMELINERELOADER_H

@class CHSTimelineController;
@protocol HDSPWidgetReloader;

#import <Foundation/Foundation.h>


@interface HDSPWidgetTimelineReloader : NSObject <HDSPWidgetReloader>

 {
    CHSTimelineController *_timelineController;
}




-(id)init;
-(void)reloadSleepWidget;


@end


#endif
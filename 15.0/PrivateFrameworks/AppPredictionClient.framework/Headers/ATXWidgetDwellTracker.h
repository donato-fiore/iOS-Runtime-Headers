// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXWIDGETDWELLTRACKER_H
#define ATXWIDGETDWELLTRACKER_H

@class NSMutableDictionary;
@protocol ATXWidgetDwellTrackerDelegate;

#import <Foundation/Foundation.h>


@interface ATXWidgetDwellTracker : NSObject {
    NSMutableDictionary *_widgetUniqueIdToAppearDateMap;
}


@property (weak, nonatomic) NSObject<ATXWidgetDwellTrackerDelegate> *delegate; // ivar: _delegate


-(id)init;
-(void)resetAllTracking;
-(void)widgetDidAppear:(id)arg0 date:(id)arg1 ;
-(void)widgetDidDisappear:(id)arg0 date:(id)arg1 ;


@end


#endif
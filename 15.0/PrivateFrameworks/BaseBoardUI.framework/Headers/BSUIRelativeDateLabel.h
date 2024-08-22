// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BSUIRELATIVEDATELABEL_H
#define BSUIRELATIVEDATELABEL_H

@class BSRelativeDateTimer, NSString;
@protocol BSRelativeDateTimerDelegate;


#import "BSUIDefaultDateLabel.h"

@interface BSUIRelativeDateLabel : BSUIDefaultDateLabel <BSRelativeDateTimerDelegate>

 {
    BSRelativeDateTimer *_relativeDateTimer;
    NSUInteger _value;
    NSUInteger _resolution;
    NSInteger _comparedToNow;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)constructLabelString;
-(void)dealloc;
-(void)prepareForReuse;
-(void)setTimeZoneRelativeStartDate:(id)arg0 absoluteStartDate:(id)arg1 ;
-(void)timerFiredWithValue:(NSUInteger)arg0 forResolution:(NSUInteger)arg1 comparedToNow:(NSInteger)arg2 ;


@end


#endif
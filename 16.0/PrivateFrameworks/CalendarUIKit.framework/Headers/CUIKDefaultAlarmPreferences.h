// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUIKDEFAULTALARMPREFERENCES_H
#define CUIKDEFAULTALARMPREFERENCES_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface CUIKDefaultAlarmPreferences : NSObject

@property (retain, nonatomic) NSNumber *defaultAllDayAlarmOffset; // ivar: _defaultAllDayAlarmOffset
@property (retain, nonatomic) NSNumber *defaultTimedAlarmOffset; // ivar: _defaultTimedAlarmOffset


-(id)_defaultBirthdayAlarmOffsetForSources:(id)arg0 ;
-(id)defaultAlarmOffsetForAlarmType:(int)arg0 sources:(id)arg1 ;
-(void)setDefaultAlarmOffset:(id)arg0 forAlarmType:(int)arg1 sources:(id)arg2 ;


@end


#endif
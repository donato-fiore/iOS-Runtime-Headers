// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUIKUSERACTIVITYREMINDERSLISTDATE_H
#define CUIKUSERACTIVITYREMINDERSLISTDATE_H

@class NSDate;


#import "CUIKUserActivity.h"

@interface CUIKUserActivityRemindersListDate : CUIKUserActivity

@property (readonly, nonatomic) NSDate *date; // ivar: _date


-(id)dictionary;
-(id)initWithDate:(id)arg0 ;
-(id)initWithDate:(id)arg0 calendar:(id)arg1 ;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif
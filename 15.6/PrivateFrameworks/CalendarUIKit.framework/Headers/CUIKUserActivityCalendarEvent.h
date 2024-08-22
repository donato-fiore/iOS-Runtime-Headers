// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUIKUSERACTIVITYCALENDAREVENT_H
#define CUIKUSERACTIVITYCALENDAREVENT_H

@class NSString, NSDate;


#import "CUIKUserActivityWithSource.h"

@interface CUIKUserActivityCalendarEvent : CUIKUserActivityWithSource {
    NSString *_externalID;
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_location;
    NSString *_relatedUniqueIdentifier;
}


@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSUInteger view; // ivar: _view


-(id)dictionary;
-(id)eventFromStore:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithEvent:(id)arg0 view:(NSUInteger)arg1 ;
-(id)initWithEvent:(id)arg0 view:(NSUInteger)arg1 forceLocal:(BOOL)arg2 ;
-(void)updateActivity:(id)arg0 ;


@end


#endif
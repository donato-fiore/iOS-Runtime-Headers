// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFCALENDAREVENTBUILDER_H
#define HFCALENDAREVENTBUILDER_H

@class NSString, NSDate, NSDateComponents;
@protocol HFTimeEventBuilder;


#import "HFEventBuilder.h"

@interface HFCalendarEventBuilder : HFEventBuilder <HFTimeEventBuilder>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *effectiveFireDate;
@property (copy, nonatomic) NSDate *fireDate; // ivar: _fireDate
@property (copy, nonatomic) NSDateComponents *fireTimeComponents; // ivar: _fireTimeComponents
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_fireDateForTimeComponents:(id)arg0 ;
-(id)buildNewEventsFromCurrentState;
-(id)compareToObject:(id)arg0 ;
-(id)comparisonKey;
-(id)effectiveFireTimeComponents;
-(id)eventType;
-(id)initWithEvent:(id)arg0 ;
-(id)naturalLanguageNameOfType:(NSUInteger)arg0 withHome:(id)arg1 recurrences:(id)arg2 ;
-(id)naturalLanguageNameWithOptions:(id)arg0 ;
-(id)naturalLanguageNameWithOptions:(id)arg0 recurrences:(id)arg1 ;
-(id)performValidation;
-(void)updateBaseFireDateForTrigger;


@end


#endif
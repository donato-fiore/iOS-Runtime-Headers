// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLKCOMPLICATIONTEMPLATEEXTRALARGEDATE_H
#define CLKCOMPLICATIONTEMPLATEEXTRALARGEDATE_H



#import "CLKComplicationTemplate.h"
#import "CLKDateTextProvider.h"

@interface CLKComplicationTemplateExtraLargeDate : CLKComplicationTemplate

@property (copy, nonatomic) CLKDateTextProvider *dayTextProvider; // ivar: _dayTextProvider
@property (nonatomic) NSUInteger highlightMode; // ivar: _highlightMode
@property (copy, nonatomic) CLKDateTextProvider *weekdayTextProvider; // ivar: _weekdayTextProvider


+(id)templateWithWeekdayTextProvider:(id)arg0 dayTextProvider:(id)arg1 ;
-(BOOL)highlightLine2;
-(NSInteger)compatibleFamily;
-(id)initWithWeekdayTextProvider:(id)arg0 dayTextProvider:(id)arg1 ;
-(void)_enumerateIntegerKeysWithBlock:(id)arg0 ;
-(void)_enumerateTextProviderKeysWithBlock:(id)arg0 ;
-(void)setHighlightLine2:(BOOL)arg0 ;


@end


#endif
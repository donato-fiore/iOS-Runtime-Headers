// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLKCOMPLICATIONTEMPLATEMODULARSMALLDATE_H
#define CLKCOMPLICATIONTEMPLATEMODULARSMALLDATE_H



#import "CLKComplicationTemplate.h"
#import "CLKDateTextProvider.h"

@interface CLKComplicationTemplateModularSmallDate : CLKComplicationTemplate

@property (copy, nonatomic) CLKDateTextProvider *dayTextProvider; // ivar: _dayTextProvider
@property (nonatomic) NSUInteger highlightMode; // ivar: _highlightMode
@property (copy, nonatomic) CLKDateTextProvider *weekdayTextProvider; // ivar: _weekdayTextProvider


+(id)templateWithWeekdayTextProvider:(id)arg0 dayTextProvider:(id)arg1 ;
-(BOOL)highlightLine2;
-(NSInteger)compatibleFamily;
-(id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)arg0 ;
-(id)initPrivateWithJSONObjectRepresentation:(id)arg0 bundle:(id)arg1 ;
-(id)initWithWeekdayTextProvider:(id)arg0 dayTextProvider:(id)arg1 ;
-(void)_enumerateIntegerKeysWithBlock:(id)arg0 ;
-(void)_enumerateTextProviderKeysWithBlock:(id)arg0 ;
-(void)setHighlightLine2:(BOOL)arg0 ;


@end


#endif
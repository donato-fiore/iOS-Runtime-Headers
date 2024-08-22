// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLKCOMPLICATIONTEMPLATEMODULARSMALLCOLUMNSTEXT_H
#define CLKCOMPLICATIONTEMPLATEMODULARSMALLCOLUMNSTEXT_H



#import "CLKComplicationTemplate.h"
#import "CLKTextProvider.h"

@interface CLKComplicationTemplateModularSmallColumnsText : CLKComplicationTemplate

@property (nonatomic) NSInteger column2Alignment; // ivar: _column2Alignment
@property (nonatomic) BOOL highlightColumn2; // ivar: _highlightColumn2
@property (copy, nonatomic) CLKTextProvider *row1Column1TextProvider; // ivar: _row1Column1TextProvider
@property (copy, nonatomic) CLKTextProvider *row1Column2TextProvider; // ivar: _row1Column2TextProvider
@property (copy, nonatomic) CLKTextProvider *row2Column1TextProvider; // ivar: _row2Column1TextProvider
@property (copy, nonatomic) CLKTextProvider *row2Column2TextProvider; // ivar: _row2Column2TextProvider


+(id)templateWithRow1Column1TextProvider:(id)arg0 row1Column2TextProvider:(id)arg1 row2Column1TextProvider:(id)arg2 row2Column2TextProvider:(id)arg3 ;
-(NSInteger)compatibleFamily;
-(id)initWithRow1Column1TextProvider:(id)arg0 row1Column2TextProvider:(id)arg1 row2Column1TextProvider:(id)arg2 row2Column2TextProvider:(id)arg3 ;
-(void)_enumerateBOOLKeysWithBlock:(id)arg0 ;
-(void)_enumerateIntegerKeysWithBlock:(id)arg0 ;
-(void)_enumerateTextProviderKeysWithBlock:(id)arg0 ;


@end


#endif
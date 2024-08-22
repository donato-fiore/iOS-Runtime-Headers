// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLKCOMPLICATIONTEMPLATEMODULARLARGETABLE_H
#define CLKCOMPLICATIONTEMPLATEMODULARLARGETABLE_H



#import "CLKComplicationTemplate.h"
#import "CLKImageProvider.h"
#import "CLKTextProvider.h"

@interface CLKComplicationTemplateModularLargeTable : CLKComplicationTemplate

@property (nonatomic) NSInteger column2Alignment; // ivar: _column2Alignment
@property (copy, nonatomic) CLKImageProvider *headerImageProvider; // ivar: _headerImageProvider
@property (copy, nonatomic) CLKTextProvider *headerTextProvider; // ivar: _headerTextProvider
@property (copy, nonatomic) CLKTextProvider *row1Column1TextProvider; // ivar: _row1Column1TextProvider
@property (copy, nonatomic) CLKTextProvider *row1Column2TextProvider; // ivar: _row1Column2TextProvider
@property (copy, nonatomic) CLKTextProvider *row2Column1TextProvider; // ivar: _row2Column1TextProvider
@property (copy, nonatomic) CLKTextProvider *row2Column2TextProvider; // ivar: _row2Column2TextProvider
@property (nonatomic) BOOL useNoColumnPadding; // ivar: _useNoColumnPadding


+(id)templateWithHeaderImageProvider:(id)arg0 headerTextProvider:(id)arg1 row1Column1TextProvider:(id)arg2 row1Column2TextProvider:(id)arg3 row2Column1TextProvider:(id)arg4 row2Column2TextProvider:(id)arg5 ;
+(id)templateWithHeaderTextProvider:(id)arg0 row1Column1TextProvider:(id)arg1 row1Column2TextProvider:(id)arg2 row2Column1TextProvider:(id)arg3 row2Column2TextProvider:(id)arg4 ;
-(NSInteger)compatibleFamily;
-(id)initWithHeaderImageProvider:(id)arg0 headerTextProvider:(id)arg1 row1Column1TextProvider:(id)arg2 row1Column2TextProvider:(id)arg3 row2Column1TextProvider:(id)arg4 row2Column2TextProvider:(id)arg5 ;
-(id)initWithHeaderTextProvider:(id)arg0 row1Column1TextProvider:(id)arg1 row1Column2TextProvider:(id)arg2 row2Column1TextProvider:(id)arg3 row2Column2TextProvider:(id)arg4 ;
-(void)_enumerateImageProviderKeysWithBlock:(id)arg0 ;
-(void)_enumerateIntegerKeysWithBlock:(id)arg0 ;
-(void)_enumerateTextProviderKeysWithBlock:(id)arg0 ;


@end


#endif
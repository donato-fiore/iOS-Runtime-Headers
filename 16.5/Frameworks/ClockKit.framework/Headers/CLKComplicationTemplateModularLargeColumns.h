// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLKCOMPLICATIONTEMPLATEMODULARLARGECOLUMNS_H
#define CLKCOMPLICATIONTEMPLATEMODULARLARGECOLUMNS_H



#import "CLKComplicationTemplate.h"
#import "CLKTextProvider.h"
#import "CLKImageProvider.h"

@interface CLKComplicationTemplateModularLargeColumns : CLKComplicationTemplate

@property (nonatomic) NSInteger column2Alignment; // ivar: _column2Alignment
@property (copy, nonatomic) CLKTextProvider *row1Column1TextProvider; // ivar: _row1Column1TextProvider
@property (copy, nonatomic) CLKTextProvider *row1Column2TextProvider; // ivar: _row1Column2TextProvider
@property (copy, nonatomic) CLKImageProvider *row1ImageProvider; // ivar: _row1ImageProvider
@property (copy, nonatomic) CLKTextProvider *row2Column1TextProvider; // ivar: _row2Column1TextProvider
@property (copy, nonatomic) CLKTextProvider *row2Column2TextProvider; // ivar: _row2Column2TextProvider
@property (copy, nonatomic) CLKImageProvider *row2ImageProvider; // ivar: _row2ImageProvider
@property (copy, nonatomic) CLKTextProvider *row3Column1TextProvider; // ivar: _row3Column1TextProvider
@property (copy, nonatomic) CLKTextProvider *row3Column2TextProvider; // ivar: _row3Column2TextProvider
@property (copy, nonatomic) CLKImageProvider *row3ImageProvider; // ivar: _row3ImageProvider
@property (nonatomic) BOOL useNoColumnPadding; // ivar: _useNoColumnPadding


+(id)templateWithRow1Column1TextProvider:(id)arg0 row1Column2TextProvider:(id)arg1 row2Column1TextProvider:(id)arg2 row2Column2TextProvider:(id)arg3 row3Column1TextProvider:(id)arg4 row3Column2TextProvider:(id)arg5 ;
+(id)templateWithRow1ImageProvider:(id)arg0 row1Column1TextProvider:(id)arg1 row1Column2TextProvider:(id)arg2 row2ImageProvider:(id)arg3 row2Column1TextProvider:(id)arg4 row2Column2TextProvider:(id)arg5 row3ImageProvider:(id)arg6 row3Column1TextProvider:(id)arg7 row3Column2TextProvider:(id)arg8 ;
-(NSInteger)compatibleFamily;
-(id)initWithRow1Column1TextProvider:(id)arg0 row1Column2TextProvider:(id)arg1 row2Column1TextProvider:(id)arg2 row2Column2TextProvider:(id)arg3 row3Column1TextProvider:(id)arg4 row3Column2TextProvider:(id)arg5 ;
-(id)initWithRow1ImageProvider:(id)arg0 row1Column1TextProvider:(id)arg1 row1Column2TextProvider:(id)arg2 row2ImageProvider:(id)arg3 row2Column1TextProvider:(id)arg4 row2Column2TextProvider:(id)arg5 row3ImageProvider:(id)arg6 row3Column1TextProvider:(id)arg7 row3Column2TextProvider:(id)arg8 ;
-(void)_enumerateImageProviderKeysWithBlock:(id)arg0 ;
-(void)_enumerateIntegerKeysWithBlock:(id)arg0 ;
-(void)_enumerateTextProviderKeysWithBlock:(id)arg0 ;


@end


#endif
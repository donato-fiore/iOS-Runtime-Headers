// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLKCOMPLICATIONTEMPLATEEXTRALARGESTACKTEXT_H
#define CLKCOMPLICATIONTEMPLATEEXTRALARGESTACKTEXT_H



#import "CLKComplicationTemplate.h"
#import "CLKTextProvider.h"

@interface CLKComplicationTemplateExtraLargeStackText : CLKComplicationTemplate

@property (nonatomic) BOOL highlightLine2;
@property (nonatomic) NSUInteger highlightMode; // ivar: _highlightMode
@property (copy, nonatomic) CLKTextProvider *line1TextProvider; // ivar: _line1TextProvider
@property (copy, nonatomic) CLKTextProvider *line2TextProvider; // ivar: _line2TextProvider


+(id)templateWithLine1TextProvider:(id)arg0 line2TextProvider:(id)arg1 ;
-(NSInteger)compatibleFamily;
-(id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)arg0 ;
-(id)initPrivateWithJSONObjectRepresentation:(id)arg0 bundle:(id)arg1 ;
-(id)initWithLine1TextProvider:(id)arg0 line2TextProvider:(id)arg1 ;
-(void)_enumerateIntegerKeysWithBlock:(id)arg0 ;
-(void)_enumerateTextProviderKeysWithBlock:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLKCOMPLICATIONTEMPLATEGRAPHICCIRCULARSTACKTEXT_H
#define CLKCOMPLICATIONTEMPLATEGRAPHICCIRCULARSTACKTEXT_H



#import "CLKComplicationTemplateGraphicCircular.h"
#import "CLKTextProvider.h"

@interface CLKComplicationTemplateGraphicCircularStackText : CLKComplicationTemplateGraphicCircular

@property (nonatomic) NSUInteger highlightMode; // ivar: _highlightMode
@property (copy, nonatomic) CLKTextProvider *line1TextProvider; // ivar: _line1TextProvider
@property (copy, nonatomic) CLKTextProvider *line2TextProvider; // ivar: _line2TextProvider


+(id)templateWithLine1TextProvider:(id)arg0 line2TextProvider:(id)arg1 ;
-(BOOL)highlightLine2;
-(id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)arg0 ;
-(id)initPrivateWithJSONObjectRepresentation:(id)arg0 bundle:(id)arg1 ;
-(id)initWithLine1TextProvider:(id)arg0 line2TextProvider:(id)arg1 ;
-(void)_enumerateIntegerKeysWithBlock:(id)arg0 ;
-(void)_enumerateTextProviderKeysWithBlock:(id)arg0 ;
-(void)setHighlightLine2:(BOOL)arg0 ;


@end


#endif
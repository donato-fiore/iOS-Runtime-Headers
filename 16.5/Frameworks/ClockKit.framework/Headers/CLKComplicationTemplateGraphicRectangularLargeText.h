// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLKCOMPLICATIONTEMPLATEGRAPHICRECTANGULARLARGETEXT_H
#define CLKCOMPLICATIONTEMPLATEGRAPHICRECTANGULARLARGETEXT_H



#import "CLKComplicationTemplate.h"
#import "CLKTextProvider.h"
#import "CLKFullColorImageProvider.h"

@interface CLKComplicationTemplateGraphicRectangularLargeText : CLKComplicationTemplate

@property (copy, nonatomic) CLKTextProvider *bodyTextProvider; // ivar: _bodyTextProvider
@property (copy, nonatomic) CLKFullColorImageProvider *headerImageProvider; // ivar: _headerImageProvider
@property (copy, nonatomic) CLKTextProvider *headerTextProvider; // ivar: _headerTextProvider


+(id)templateWithHeaderImageProvider:(id)arg0 headerTextProvider:(id)arg1 bodyTextProvider:(id)arg2 ;
+(id)templateWithHeaderTextProvider:(id)arg0 bodyTextProvider:(id)arg1 ;
-(NSInteger)compatibleFamily;
-(id)initWithHeaderImageProvider:(id)arg0 headerTextProvider:(id)arg1 bodyTextProvider:(id)arg2 ;
-(id)initWithHeaderTextProvider:(id)arg0 bodyTextProvider:(id)arg1 ;
-(void)_enumerateFullColorImageProviderKeysWithBlock:(id)arg0 ;
-(void)_enumerateTextProviderKeysWithBlock:(id)arg0 ;


@end


#endif
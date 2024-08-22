// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLKCOMPLICATIONTEMPLATEGRAPHICRECTANGULARSTANDARDBODY_H
#define CLKCOMPLICATIONTEMPLATEGRAPHICRECTANGULARSTANDARDBODY_H



#import "CLKComplicationTemplate.h"
#import "CLKTextProvider.h"
#import "CLKFullColorImageProvider.h"

@interface CLKComplicationTemplateGraphicRectangularStandardBody : CLKComplicationTemplate

@property (copy, nonatomic) CLKTextProvider *body1TextProvider; // ivar: _body1TextProvider
@property (copy, nonatomic) CLKTextProvider *body2TextProvider; // ivar: _body2TextProvider
@property (copy, nonatomic) CLKFullColorImageProvider *headerImageProvider; // ivar: _headerImageProvider
@property (copy, nonatomic) CLKTextProvider *headerTextProvider; // ivar: _headerTextProvider


+(id)templateWithHeaderImageProvider:(id)arg0 headerTextProvider:(id)arg1 body1TextProvider:(id)arg2 ;
+(id)templateWithHeaderImageProvider:(id)arg0 headerTextProvider:(id)arg1 body1TextProvider:(id)arg2 body2TextProvider:(id)arg3 ;
+(id)templateWithHeaderTextProvider:(id)arg0 body1TextProvider:(id)arg1 ;
+(id)templateWithHeaderTextProvider:(id)arg0 body1TextProvider:(id)arg1 body2TextProvider:(id)arg2 ;
-(NSInteger)compatibleFamily;
-(id)initWithHeaderImageProvider:(id)arg0 headerTextProvider:(id)arg1 body1TextProvider:(id)arg2 ;
-(id)initWithHeaderImageProvider:(id)arg0 headerTextProvider:(id)arg1 body1TextProvider:(id)arg2 body2TextProvider:(id)arg3 ;
-(id)initWithHeaderTextProvider:(id)arg0 body1TextProvider:(id)arg1 ;
-(id)initWithHeaderTextProvider:(id)arg0 body1TextProvider:(id)arg1 body2TextProvider:(id)arg2 ;
-(void)_enumerateFullColorImageProviderKeysWithBlock:(id)arg0 ;
-(void)_enumerateTextProviderKeysWithBlock:(id)arg0 ;


@end


#endif
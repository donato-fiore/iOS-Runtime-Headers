// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LPEMAILCOMPATIBLEHTMLCAPTIONBARCOMPONENT_H
#define LPEMAILCOMPATIBLEHTMLCAPTIONBARCOMPONENT_H



#import "LPHTMLComponent.h"
#import "LPCaptionBarStyle.h"
#import "LPCaptionBarPresentationProperties.h"

@interface LPEmailCompatibleHTMLCaptionBarComponent : LPHTMLComponent {
    LPCaptionBarStyle *_style;
    LPCaptionBarPresentationProperties *_presentationProperties;
}




+(id)baseRules;
+(id)ruleDictionaryForStyle:(id)arg0 ;
-(id)initWithStyle:(id)arg0 presentationProperties:(id)arg1 themePath:(id)arg2 generator:(id)arg3 ;
-(void)buildComponents;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LPEMAILCOMPATIBLEHTMLVERTICALTEXTSTACKCOMPONENT_H
#define LPEMAILCOMPATIBLEHTMLVERTICALTEXTSTACKCOMPONENT_H



#import "LPHTMLComponent.h"
#import "LPVerticalTextStackViewStyle.h"
#import "LPCaptionBarPresentationProperties.h"

@interface LPEmailCompatibleHTMLVerticalTextStackComponent : LPHTMLComponent {
    LPVerticalTextStackViewStyle *_style;
    LPCaptionBarPresentationProperties *_presentationProperties;
}




+(id)baseRules;
+(id)ruleDictionaryForStyle:(id)arg0 ;
-(id)componentForRow:(id)arg0 style:(id)arg1 name:(id)arg2 ;
-(id)initWithStyle:(id)arg0 presentationProperties:(id)arg1 themePath:(id)arg2 generator:(id)arg3 ;
-(void)buildComponents;


@end


#endif
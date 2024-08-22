// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUISHARETEMPLATEACTIVITY_H
#define SKUISHARETEMPLATEACTIVITY_H

@class UIActivity;


#import "SKUIClientContext.h"
#import "SKUIShareSheetActivityViewElement.h"

@interface SKUIShareTemplateActivity : UIActivity {
    SKUIClientContext *_clientContext;
    SKUIShareSheetActivityViewElement *_viewElement;
}




-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)_beforeActivity;
-(id)activityImage;
-(id)activityTitle;
-(id)activityType;
-(id)initWithActivityViewElement:(id)arg0 clientContext:(id)arg1 ;
-(void)performActivity;


@end


#endif
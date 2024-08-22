// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSWIFTUIPARAMETERHOSTINGCOMPONENTCONTROLLER_H
#define WFSWIFTUIPARAMETERHOSTINGCOMPONENTCONTROLLER_H



#import "CKStatefulViewComponentController.h"
#import "WFParameterHostingView.h"

@interface WFSwiftUIParameterHostingComponentController : CKStatefulViewComponentController {
    WFParameterHostingView *_viewForSizing;
}




+(id)newStatefulView:(id)arg0 ;
+(void)configureStatefulView:(id)arg0 forComponent:(id)arg1 ;
+(void)configureStatefulView:(id)arg0 forComponent:(id)arg1 forSizing:(BOOL)arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 forComponent:(id)arg1 ;
-(void)willRelinquishStatefulView:(id)arg0 ;


@end


#endif
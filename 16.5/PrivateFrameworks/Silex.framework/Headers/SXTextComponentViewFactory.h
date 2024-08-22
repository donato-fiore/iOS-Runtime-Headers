// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXTEXTCOMPONENTVIEWFACTORY_H
#define SXTEXTCOMPONENTVIEWFACTORY_H



#import "SXComponentViewFactory.h"
#import "SXTangierController.h"

@interface SXTextComponentViewFactory : SXComponentViewFactory

@property (readonly, weak, nonatomic) SXTangierController *tangierController; // ivar: _tangierController


-(id)componentViewForComponent:(id)arg0 ;
-(id)initWithDOMObjectProvider:(id)arg0 viewport:(id)arg1 presentationDelegateProvider:(id)arg2 componentStyleRendererFactory:(id)arg3 tangierController:(id)arg4 ;
-(id)type;
-(int)role;


@end


#endif
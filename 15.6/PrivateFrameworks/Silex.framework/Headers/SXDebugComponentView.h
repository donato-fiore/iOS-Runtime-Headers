// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXDEBUGCOMPONENTVIEW_H
#define SXDEBUGCOMPONENTVIEW_H

@protocol SXLayoutInvalidator;


#import "SXComponentView.h"

@interface SXDebugComponentView : SXComponentView

@property (readonly, nonatomic) NSObject<SXLayoutInvalidator> *invalidator; // ivar: _invalidator


-(id)initWithDOMObjectProvider:(id)arg0 viewport:(id)arg1 presentationDelegate:(id)arg2 componentStyleRendererFactory:(id)arg3 invalidator:(id)arg4 ;
-(void)loadComponent:(id)arg0 ;
-(void)presentComponentWithChanges:(struct ? )arg0 ;


@end


#endif
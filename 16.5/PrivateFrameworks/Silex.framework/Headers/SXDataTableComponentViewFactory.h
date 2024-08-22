// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXDATATABLECOMPONENTVIEWFACTORY_H
#define SXDATATABLECOMPONENTVIEWFACTORY_H

@protocol SXAdIgnorableViewFactory, SXComponentActionHandler, SXComponentController, SXImageViewFactory, SXTextComponentLayoutHosting;


#import "SXComponentViewFactory.h"

@interface SXDataTableComponentViewFactory : SXComponentViewFactory

@property (readonly, nonatomic) NSObject<SXAdIgnorableViewFactory> *adIgnorableViewFactory; // ivar: _adIgnorableViewFactory
@property (readonly, nonatomic) NSObject<SXComponentActionHandler> *componentActionHandler; // ivar: _componentActionHandler
@property (readonly, weak, nonatomic) NSObject<SXComponentController> *componentController; // ivar: _componentController
@property (readonly, nonatomic) NSObject<SXImageViewFactory> *imageViewFactory; // ivar: _imageViewFactory
@property (readonly, weak, nonatomic) NSObject<SXTextComponentLayoutHosting> *textComponentLayoutHosting; // ivar: _textComponentLayoutHosting


-(id)componentViewForComponent:(id)arg0 ;
-(id)initWithDOMObjectProvider:(id)arg0 viewport:(id)arg1 presentationDelegateProvider:(id)arg2 componentStyleRendererFactory:(id)arg3 imageViewFactory:(id)arg4 componentActionHandler:(id)arg5 textComponentLayoutHosting:(id)arg6 componentController:(id)arg7 adIgnorableViewFactory:(id)arg8 ;
-(id)type;
-(int)role;


@end


#endif
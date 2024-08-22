// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXDATATABLECOMPONENTVIEW_H
#define SXDATATABLECOMPONENTVIEW_H

@class NSString, CALayer;
@protocol SXDataTableViewDataSource, SXTangierControllerDelegate, SXViewportChangeListener, UIGestureRecognizerDelegate, SXAdIgnorableViewFactory, SXComponentActionHandler, SXComponentController, SXImageViewFactory, SXTextComponentLayoutHosting;


#import "SXComponentView.h"
#import "SXDataTableBlueprint.h"
#import "SXDataTableComponentController.h"
#import "SXDataTableDictionary.h"
#import "SXScrollView.h"
#import "SXDataTableView.h"
#import "SXTangierController.h"

@interface SXDataTableComponentView : SXComponentView <SXDataTableViewDataSource, SXTangierControllerDelegate, SXViewportChangeListener, UIGestureRecognizerDelegate>



@property (readonly, nonatomic) NSObject<SXAdIgnorableViewFactory> *adIgnorableViewFactory; // ivar: _adIgnorableViewFactory
@property (retain, nonatomic) SXDataTableBlueprint *blueprint; // ivar: _blueprint
@property (readonly, nonatomic) NSObject<SXComponentActionHandler> *componentActionHandler; // ivar: _componentActionHandler
@property (readonly, weak, nonatomic) NSObject<SXComponentController> *componentController; // ivar: _componentController
@property (retain, nonatomic) SXDataTableComponentController *dataTableComponentController; // ivar: _dataTableComponentController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXImageViewFactory> *imageViewFactory; // ivar: _imageViewFactory
@property (retain, nonatomic) SXDataTableDictionary *imageViews; // ivar: _imageViews
@property (retain, nonatomic) CALayer *leftShadow; // ivar: _leftShadow
@property (retain, nonatomic) CALayer *rightShadow; // ivar: _rightShadow
@property (retain, nonatomic) SXScrollView *scrollView; // ivar: _scrollView
@property (readonly) Class superclass;
@property (retain, nonatomic) SXDataTableView *tableView; // ivar: _tableView
@property (retain, nonatomic) SXTangierController *tangierController; // ivar: _tangierController
@property (readonly, weak, nonatomic) NSObject<SXTextComponentLayoutHosting> *textComponentLayoutHosting; // ivar: _textComponentLayoutHosting
@property (retain, nonatomic) SXDataTableDictionary *textViews; // ivar: _textViews


-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)userInteractable;
-(id)contentViewForBehavior:(id)arg0 ;
-(id)dataTableView:(id)arg0 viewForCellAtIndexPath:(struct ? )arg1 constraintToSize:(struct CGSize )arg2 ;
-(id)descriptorForIndexPath:(struct ? )arg0 ;
-(id)initWithDOMObjectProvider:(id)arg0 viewport:(id)arg1 presentationDelegate:(id)arg2 componentStyleRendererFactory:(id)arg3 imageViewFactory:(id)arg4 componentActionHandler:(id)arg5 textComponentLayoutHosting:(id)arg6 componentController:(id)arg7 adIgnorableViewFactory:(id)arg8 ;
-(void)addTextStorageForIndexPath:(struct ? )arg0 toCollectior:(id)arg1 ;
-(void)dealloc;
-(void)presentComponentWithChanges:(struct ? )arg0 ;
-(void)receivedInfo:(id)arg0 fromLayoutingPhaseWithIdentifier:(id)arg1 ;
-(void)setupShadowsIfNeeded;
-(void)tangierControllerDidScroll:(id)arg0 ;
-(void)updateShadowOpacity;
-(void)updateTangierController;


@end


#endif
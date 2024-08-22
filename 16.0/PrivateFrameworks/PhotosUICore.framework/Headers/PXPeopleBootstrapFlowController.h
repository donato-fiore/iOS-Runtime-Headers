// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPEOPLEBOOTSTRAPFLOWCONTROLLER_H
#define PXPEOPLEBOOTSTRAPFLOWCONTROLLER_H

@class NSString, UIBarButtonItem, UIViewController<PXPeopleFlowViewController>, NSArray;
@protocol PXPeopleFlowController, PXPeopleSuggestionManagerDataSource, PXPeopleBootstrapFlowDelegate;

#import <Foundation/Foundation.h>

#import "PXPeopleBootstrapContext.h"

@interface PXPeopleBootstrapFlowController : NSObject <PXPeopleFlowController>



@property (retain, nonatomic) NSObject<PXPeopleSuggestionManagerDataSource> *bootstrapDataSource; // ivar: _bootstrapDataSource
@property (retain, nonatomic) NSObject<PXPeopleBootstrapFlowDelegate> *bootstrapDelegate; // ivar: _bootstrapDelegate
@property (readonly, nonatomic) PXPeopleBootstrapContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasNextViewController;
@property (readonly, nonatomic) BOOL hasPreviousViewController;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIBarButtonItem *leftBarButton;
@property (nonatomic) NSUInteger namingResultType; // ivar: _namingResultType
@property (readonly, nonatomic) UIViewController<PXPeopleFlowViewController> *nextViewController;
@property (readonly, nonatomic) UIViewController<PXPeopleFlowViewController> *previousViewController;
@property (readonly, nonatomic) BOOL shouldPresentNaming;
@property (readonly, nonatomic) BOOL shouldPresentPostNaming;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger viewControllerIndex; // ivar: _viewControllerIndex
@property (copy, nonatomic) NSArray *viewControllers; // ivar: _viewControllers
@property (readonly, nonatomic) BOOL wantsCancelButton; // ivar: _wantsCancelButton


-(BOOL)shouldPresentConfirmationForPerson:(id)arg0 ;
-(id)init;
-(id)initEmptyFlowWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(void)cancel:(id)arg0 ;
-(void)commonInitWithContext:(id)arg0 ;
-(void)computeViewControllersForBootstrapFlow;
-(void)dealloc;
-(void)done:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)recomputeViewControllersForChangeInKeyPath:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPEOPLEPICKERFLOWCONTROLLER_H
#define PXPEOPLEPICKERFLOWCONTROLLER_H

@class NSMutableArray, NSArray, NSString, UIBarButtonItem, UIViewController<PXPeopleFlowViewController>;
@protocol PXPeopleFlowController, PXPeopleFlowDelegate;

#import <Foundation/Foundation.h>


@interface PXPeoplePickerFlowController : NSObject <PXPeopleFlowController>



@property (retain, nonatomic) NSMutableArray *bootstrappedSourceUUIDs; // ivar: _bootstrappedSourceUUIDs
@property (copy, nonatomic) NSArray *contexts; // ivar: _contexts
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<PXPeopleFlowDelegate> *flowDelegate; // ivar: _flowDelegate
@property (readonly, nonatomic) BOOL hasNextViewController;
@property (readonly, nonatomic) BOOL hasPreviousViewController;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIBarButtonItem *leftBarButton;
@property (readonly, nonatomic) UIViewController<PXPeopleFlowViewController> *nextViewController;
@property (readonly, copy, nonatomic) NSArray *people; // ivar: _people
@property (readonly, nonatomic) UIViewController<PXPeopleFlowViewController> *previousViewController;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger viewControllerIndex; // ivar: _viewControllerIndex
@property (copy, nonatomic) NSArray *viewControllers; // ivar: _viewControllers
@property (readonly, nonatomic) BOOL wantsCancelButton;


+(id)new;
-(BOOL)_hasMergeCandidatesForDataSource:(id)arg0 person:(id)arg1 ;
-(id)_dataSource;
-(id)init;
-(id)initWithPeople:(id)arg0 ;
-(void)_computeViewControllersForPeople:(id)arg0 ;
-(void)cancel:(id)arg0 ;
-(void)done:(id)arg0 ;


@end


#endif
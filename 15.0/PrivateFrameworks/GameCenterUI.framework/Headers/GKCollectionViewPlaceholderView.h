// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKCOLLECTIONVIEWPLACEHOLDERVIEW_H
#define GKCOLLECTIONVIEWPLACEHOLDERVIEW_H

@class UICollectionReusableView, NSArray, NSString, UIActivityIndicatorView;
@protocol _GKStateMachineDelegate;


#import "GKPlaceholderContentStateMachine.h"
#import "GKPlaceholderView.h"

@interface GKCollectionViewPlaceholderView : UICollectionReusableView <_GKStateMachineDelegate>



@property (nonatomic) NSInteger alignment; // ivar: _alignment
@property (retain, nonatomic) NSArray *cachedConstraints; // ivar: _cachedConstraints
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *errorMessage; // ivar: _errorMessage
@property (retain, nonatomic) NSString *errorTitle; // ivar: _errorTitle
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIActivityIndicatorView *loadingIndicatorView; // ivar: _loadingIndicatorView
@property (retain, nonatomic) GKPlaceholderContentStateMachine *loadingMachine; // ivar: _loadingMachine
@property (retain, nonatomic) NSString *loadingState;
@property (nonatomic) SEL noContentButtonAction; // ivar: _noContentButtonAction
@property (nonatomic) id *noContentButtonTarget; // ivar: _noContentButtonTarget
@property (retain, nonatomic) NSString *noContentButtonTitle; // ivar: _noContentButtonTitle
@property (retain, nonatomic) NSString *noContentMessage; // ivar: _noContentMessage
@property (retain, nonatomic) NSString *noContentTitle; // ivar: _noContentTitle
@property (retain, nonatomic) GKPlaceholderView *placeholderView; // ivar: _placeholderView
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)buttonPressed;
-(void)dealloc;
-(void)delayedShowLoadingIndicator;
-(void)didEnterErrorState;
-(void)didEnterLoadingState;
-(void)didEnterNoContentState;
-(void)didExitErrorState;
-(void)didExitLoadingState;
-(void)didExitNoContentState;
-(void)updateConstraints;


@end


#endif
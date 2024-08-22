// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INTERNETVIEWCONTROLLER_H
#define INTERNETVIEWCONTROLLER_H

@class UILabel, UIActivityIndicatorView, UIImageView, NSString, UIView;
@protocol UIScrollViewDelegate;


#import "AssistantSubUIViewController.h"

@interface InternetViewController : AssistantSubUIViewController <UIScrollViewDelegate>

 {
    UILabel *spinnerWithStatusAdjacentLabel;
    UIActivityIndicatorView *spinnerWithStatusAdjacentSpinner;
    UILabel *descriptionLabel;
}


@property (retain, nonatomic) UIImageView *cablingImageLastFrame; // ivar: cablingImageLastFrame
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIView *descriptionContainerView; // ivar: descriptionContainerView
@property (retain, nonatomic) UIView *diagramContainerView; // ivar: diagramContainerView
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger internetFlow; // ivar: internetFlow
@property (retain, nonatomic) UIView *spinnerWithStatusAdjacentView; // ivar: spinnerWithStatusAdjacentView
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *swapDescriptionText; // ivar: _swapDescriptionText
@property (retain, nonatomic) NSString *swapSourceLabelText; // ivar: _swapSourceLabelText
@property (retain, nonatomic) UIView *tableHeaderContainerView; // ivar: tableHeaderContainerView


-(void)addInformationalDiagramWithWANConnectedBaseProductID:(unsigned int)arg0 replacementProductID:(unsigned int)arg1 ;
-(void)addInternetNotWorkingUI;
-(void)addInternetWANPluginUI;
-(void)addSwapCablingUI;
-(void)dealloc;
-(void)determineInfoForDevice:(id)arg0 deviceDiagramInfo:(struct ? *)arg1 ;
-(void)loadView;
-(void)presentInternetDisconnectedUI;
-(void)presentInternetWANPluginUI;
-(void)presentSwapCablingCompleteUI;
-(void)presentSwapCablingUI;
-(void)setCommonTraitsForLabel:(id)arg0 forSize:(CGFloat)arg1 ;
-(void)startAnimatingCablingForView:(id)arg0 startingOpacity:(float)arg1 endingOpacity:(float)arg2 duration:(CGFloat)arg3 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif
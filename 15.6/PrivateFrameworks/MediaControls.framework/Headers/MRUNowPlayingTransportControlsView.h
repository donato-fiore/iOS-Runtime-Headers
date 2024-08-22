// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRUNOWPLAYINGTRANSPORTCONTROLSVIEW_H
#define MRUNOWPLAYINGTRANSPORTCONTROLSVIEW_H

@class UIView, MPCPlayerResponse;
@protocol MRUNowPlayingTransportControlsViewDelegate;


#import "MRUTransportButton.h"
#import "MRUVisualStylingProvider.h"

@interface MRUNowPlayingTransportControlsView : UIView

@property (weak, nonatomic) NSObject<MRUNowPlayingTransportControlsViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) MRUTransportButton *languageOptionsButton; // ivar: _languageOptionsButton
@property (nonatomic) NSInteger layout; // ivar: _layout
@property (retain, nonatomic) MRUTransportButton *leftButton; // ivar: _leftButton
@property (retain, nonatomic) MRUTransportButton *middleButton; // ivar: _middleButton
@property (retain, nonatomic) MPCPlayerResponse *response; // ivar: _response
@property (retain, nonatomic) MRUTransportButton *rightButton; // ivar: _rightButton
@property (nonatomic) BOOL showTVButtons; // ivar: _showTVButtons
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider
@property (retain, nonatomic) MRUTransportButton *tvRemoteButton; // ivar: _tvRemoteButton


-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)buttonHoldBegan:(id)arg0 ;
-(void)buttonHoldReleased:(id)arg0 ;
-(void)currentLocaleDidChangeNotification:(id)arg0 ;
-(void)didSelectLanguageOptionsButton:(id)arg0 ;
-(void)didSelectTVRemoteButton:(id)arg0 ;
-(void)didSelectedLeftButton:(id)arg0 ;
-(void)didSelectedMiddleButton:(id)arg0 ;
-(void)didSelectedRightButton:(id)arg0 ;
-(void)updateImageConfiguration;
-(void)updateResponse;
-(void)updateVisibility;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCKPMEDIACONTROLCARDSECTIONVIEWCONTROLLER_H
#define SCKPMEDIACONTROLCARDSECTIONVIEWCONTROLLER_H

@class UIViewController, AFSecurityConnection, SFMediaRemoteControlCardSection, NSString;
@protocol CRKCardSectionViewControlling, CRKCardSectionViewControllingDelegate;


#import "SCKPMediaControlCardSectionView.h"

@interface SCKPMediaControlCardSectionViewController : UIViewController <CRKCardSectionViewControlling>

 {
    AFSecurityConnection *_assistantSecurityConnection;
    UIViewController *_mediaPlatterViewController;
}


@property (readonly) SFMediaRemoteControlCardSection *cardSection; // ivar: _cardSection
@property (weak, nonatomic) NSObject<CRKCardSectionViewControllingDelegate> *cardSectionViewControllingDelegate; // ivar: cardSectionViewControllingDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) SCKPMediaControlCardSectionView *view;


+(void)initialize;
-(BOOL)_canShowWhileLocked;
-(id)_nowPlayingViewControllerWithRouteUID:(id)arg0 ;
-(id)_nowPlayingVisualStylingProvider;
-(id)initWithMediaRemoteControlCardSection:(id)arg0 ;
-(void)_updateActiveSystemEndpointForRouteUID:(id)arg0 ;
-(void)_updatePlatterForHashedRouteUID:(id)arg0 ;
-(void)_updatePlatterForRouteUID:(id)arg0 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif
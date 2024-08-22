// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRIUICARDNDUSESIRIHEADERVIEWCONTROLLER_H
#define SIRIUICARDNDUSESIRIHEADERVIEWCONTROLLER_H

@class UIViewController, NSString, UIImageView, UILabel;
@protocol SiriUICarDNDContextProviderDelegate, SiriUICarDNDDelegate;


#import "SiriUICarDNDContextProvider.h"

@interface SiriUICarDNDUseSiriHeaderViewController : UIViewController <SiriUICarDNDContextProviderDelegate>

 {
    BOOL _localizedSubtitleDisplayedAboveTitle;
}


@property (retain, nonatomic, getter=_contextProvider, setter=_setContextProvider:) SiriUICarDNDContextProvider *contextProvider; // ivar: _contextProvider
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SiriUICarDNDDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, getter=_localizedSubtitle, setter=_setLocalizedSubtitle:) NSString *localizedSubtitle; // ivar: _localizedSubtitle
@property (retain, nonatomic, getter=_localizedTitle, setter=_setLocalizedTitle:) NSString *localizedTitle; // ivar: _localizedTitle
@property (retain, nonatomic, getter=_siriOrbImageView, setter=_setSiriOrbImageView:) UIImageView *siriOrbImageView; // ivar: _siriOrbImageView
@property (retain, nonatomic, getter=_subtitleLabel, setter=_setSubtitleLabel:) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (readonly) Class superclass;
@property (retain, nonatomic, getter=_titleLabel, setter=_setTitleLabel:) UILabel *titleLabel; // ivar: _titleLabel


+(BOOL)shouldShowCarDNDUseSiriHeaderViewController;
-(BOOL)_canShowWhileLocked;
-(id)_hintContext;
-(void)_addContextProvider;
-(void)_removeContextProvider;
-(void)_sendCardAppearedAnalyticsEvent;
-(void)_setupImageView;
-(void)_setupSubtitleLabel;
-(void)_setupTitleAndSubtitleConstraints;
-(void)_setupTitleLabel;
-(void)_setupView;
-(void)contextProvided:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBRINGERALERTELEMENT_H
#define SBRINGERALERTELEMENT_H

@class SBUISystemApertureContentProvider, NSString, UIColor, SBUISystemApertureLabel, SBUISystemApertureCAPackageContentProvider, UIView, FBScene;
@protocol SBSystemApertureContextProviding, SBRingerNoticeUICoordinating, SAAlertHosting, SAInvalidatable, SBRingerAlertElementDelegate;


#import "SBAlertProvidedContentElement.h"
#import "SBRingerVolumeSliderView.h"

@interface SBRingerAlertElement : SBAlertProvidedContentElement <SBSystemApertureContextProviding, SBRingerNoticeUICoordinating>

 {
    id<SAAlertHosting> *_alertHost;
}


@property (readonly, nonatomic, getter=isAffiliatedWithSessionMonitor) BOOL affiliatedWithSessionMonitor;
@property (retain, nonatomic) NSObject<SAInvalidatable> *assertion; // ivar: _assertion
@property (retain, nonatomic) SBUISystemApertureContentProvider *contentProvider; // ivar: _contentProvider
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBRingerAlertElementDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIColor *keyColor;
@property (nonatomic) BOOL lastEventIsAVolumeChange; // ivar: _lastEventIsAVolumeChange
@property (nonatomic) CGFloat overshoot; // ivar: _overshoot
@property (readonly, nonatomic) BOOL prefersAlertKeyLineStyle;
@property (readonly, nonatomic, getter=isPresented) BOOL presented;
@property (retain, nonatomic) SBUISystemApertureLabel *ringerLabel; // ivar: _ringerLabel
@property (retain, nonatomic) SBUISystemApertureCAPackageContentProvider *ringerLeadingContentViewProvider; // ivar: _ringerLeadingContentViewProvider
@property (retain, nonatomic) SBUISystemApertureCAPackageContentProvider *ringerMinimalContentViewProvider; // ivar: _ringerMinimalContentViewProvider
@property (nonatomic, getter=isRingerSilent) BOOL ringerSilent; // ivar: _ringerSilent
@property (retain, nonatomic) UIView *ringerTrailingContentView; // ivar: _ringerTrailingContentView
@property (readonly, nonatomic) FBScene *scene;
@property (retain, nonatomic) SBRingerVolumeSliderView *sliderView; // ivar: _sliderView
@property (nonatomic) NSUInteger source; // ivar: _source
@property (readonly) Class superclass;
@property (nonatomic) float volume; // ivar: _volume


-(BOOL)isProvidedViewConcentric:(id)arg0 inLayoutMode:(NSInteger)arg1 ;
-(id)_buildLeadingContentViewProviderForVolume;
-(id)_colorForRingerSilent:(BOOL)arg0 ;
-(id)_textForRingerSilent:(BOOL)arg0 ;
-(id)alertHost;
-(id)clientIdentifier;
-(id)elementIdentifier;
-(id)initWithSource:(NSUInteger)arg0 ringerSilent:(BOOL)arg1 ;
-(void)_shakeRingerBell;
-(void)_updateStateWithTransitionType:(NSUInteger)arg0 ;
-(void)_updateVolumeSliderAnimated:(BOOL)arg0 ;
-(void)buttonReleased;
-(void)nudgeUp:(BOOL)arg0 ;
-(void)presentForMuteSwitch:(BOOL)arg0 ;
-(void)setAlertHost:(id)arg0 ;


@end


#endif
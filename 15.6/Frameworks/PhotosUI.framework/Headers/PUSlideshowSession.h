// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUSLIDESHOWSESSION_H
#define PUSLIDESHOWSESSION_H

@class OKMediaFeederPhotoKit, OKProducerPreset, PHAssetCollection, NSString, PHFetchResult, OKPresentationViewController, NSUUID;
@protocol PUSlideshowViewModelChangeObserver, PUSlideshowSettingsViewModelChangeObserver, PXSettingsKeyObserver;

#import <Foundation/Foundation.h>

#import "PUSlideshowContextRegistry.h"
#import "PUSlideshowSettingsViewModel.h"
#import "PUSlideshowViewModel.h"

@interface PUSlideshowSession : NSObject <PUSlideshowViewModelChangeObserver, PUSlideshowSettingsViewModelChangeObserver, PXSettingsKeyObserver>

 {
    OKMediaFeederPhotoKit *_mediaFeeder;
    PUSlideshowContextRegistry *_contextRegistry;
    OKProducerPreset *_currentPreset;
}


@property (nonatomic, setter=_setDisablingIdleTimer:) BOOL _disablingIdleTimer; // ivar: __disablingIdleTimer
@property (retain, nonatomic, setter=_setDisablingIdleTimerToken:) id *_disablingIdleTimerToken; // ivar: __disablingIdleTimerToken
@property (readonly, nonatomic) PHAssetCollection *assetCollection; // ivar: _assetCollection
@property (nonatomic) NSInteger currentState; // ivar: _currentState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didStartOnce; // ivar: _didStartOnce
@property (readonly, nonatomic) PHFetchResult *fetchResult; // ivar: _fetchResult
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) OKPresentationViewController *presentationViewController; // ivar: _presentationViewController
@property (readonly, nonatomic) PUSlideshowSettingsViewModel *settingsViewModel; // ivar: _settingsViewModel
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (readonly, nonatomic) PUSlideshowViewModel *viewModel; // ivar: _viewModel


-(id)_resolutionSizes;
-(id)init;
-(id)initWithFetchResult:(id)arg0 assetCollection:(id)arg1 ;
-(id)initWithFetchResult:(id)arg0 assetCollection:(id)arg1 startIndex:(NSUInteger)arg2 ;
-(void)_addCurrentSettingsToPayload:(id)arg0 ;
-(void)_beginDisablingIdleTimer;
-(void)_configurePresentationViewController:(id)arg0 ;
-(void)_distributeSlideshowDisplayContextWithPresentationController:(id)arg0 ;
-(void)_endDisablingIdleTimerIfNecessary;
-(void)_invalidateCurrentState;
-(void)_slideshowSettingsViewModel:(id)arg0 didChange:(id)arg1 ;
-(void)_slideshowViewModel:(id)arg0 didChange:(id)arg1 ;
-(void)_updateCurrentState;
-(void)dealloc;
-(void)registerSlideshowDisplayContext:(id)arg0 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)unregisterSlideshowDisplayContext:(id)arg0 ;
-(void)updatePresentationViewController;
-(void)viewModel:(id)arg0 didChange:(id)arg1 ;


@end


#endif
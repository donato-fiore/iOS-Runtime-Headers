// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUMEDIAACCESSORYAUDIOSETTINGSVIEWCONTROLLER_H
#define HUMEDIAACCESSORYAUDIOSETTINGSVIEWCONTROLLER_H

@class NAFuture, NSString, HFMediaSystemBuilder;
@protocol HUHomePodStereoSwapperCellDelegate, HUHomePodDetailViewDelegate, HUDetailsPresentationDelegateHost, HUPresentationDelegate;


#import "HUItemTableViewController.h"
#import "HUMediaAccessoryAudioSettingsItemManager.h"

@interface HUMediaAccessoryAudioSettingsViewController : HUItemTableViewController <HUHomePodStereoSwapperCellDelegate, HUHomePodDetailViewDelegate, HUDetailsPresentationDelegateHost>



@property (retain, nonatomic) NAFuture *accessoryIdentifyFuture; // ivar: _accessoryIdentifyFuture
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HUMediaAccessoryAudioSettingsItemManager *itemManager;
@property (readonly, nonatomic) HFMediaSystemBuilder *mediaSystemBuilder; // ivar: _mediaSystemBuilder
@property (weak, nonatomic) NSObject<HUPresentationDelegate> *presentationDelegate; // ivar: _presentationDelegate
@property (nonatomic) BOOL requiresPresentingViewControllerDismissal; // ivar: _requiresPresentingViewControllerDismissal
@property (readonly) Class superclass;


-(BOOL)automaticallyUpdatesViewControllerTitle;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)_homePodStereoSwapperCell;
-(id)initWithMediaSystemBuilder:(id)arg0 mediaAccessoryItem:(id)arg1 ;
-(id)item;
-(void)_updateSwapperCell:(id)arg0 ;
-(void)didPressSwapButton:(id)arg0 ;
-(void)didTapSpeaker:(id)arg0 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUPLAYBACKINFLUENCESVIEWCONTROLLER_H
#define HUPLAYBACKINFLUENCESVIEWCONTROLLER_H

@class NSString;
@protocol HFItemManagerDelegate, UITextViewDelegate, HUSwitchCellDelegate, HUAccessorySettingsDetailsViewControllerProtocol, HUAccessorySettingsDetailsViewControllerProtocol;


#import "HUItemTableViewController.h"
#import "HUPlaybackInfluencesItemManager.h"

@interface HUPlaybackInfluencesViewController : HUItemTableViewController <HFItemManagerDelegate, UITextViewDelegate, HUSwitchCellDelegate, HUAccessorySettingsDetailsViewControllerProtocol, HUAccessorySettingsDetailsViewControllerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HUPlaybackInfluencesItemManager *playbackInfluencesItemManager; // ivar: _playbackInfluencesItemManager
@property (readonly) Class superclass;


-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)initWithAccessoryGroupItem:(id)arg0 ;
-(id)initWithAccessorySettingItem:(id)arg0 ;
-(id)initWithAccessorySettingItem:(id)arg0 module:(id)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(void)dismissPrivacyController;
-(void)setupCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 ;
-(void)switchCell:(id)arg0 didTurnOn:(BOOL)arg1 ;


@end


#endif
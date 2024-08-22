// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HULOCKCATEGORYSETTINGSVIEWCONTROLLER_H
#define HULOCKCATEGORYSETTINGSVIEWCONTROLLER_H

@class NSString, HFPinCodeManager, HFUserNotificationServiceTopic;
@protocol UITextViewDelegate;


#import "HUItemCollectionViewController.h"
#import "HULockCategorySettingsItemManager.h"

@interface HULockCategorySettingsViewController : HUItemCollectionViewController <UITextViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HULockCategorySettingsItemManager *lockSettingsItemManager; // ivar: _lockSettingsItemManager
@property (retain, nonatomic) HFPinCodeManager *pinCodeManager; // ivar: _pinCodeManager
@property (readonly) Class superclass;
@property (retain, nonatomic) HFUserNotificationServiceTopic *topic; // ivar: _topic


-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initWithItemManager:(id)arg0 collectionViewLayout:(id)arg1 ;
-(id)initWithLockTopic:(id)arg0 home:(id)arg1 ;
-(id)initWithLockTopic:(id)arg0 pinCodeManager:(id)arg1 home:(id)arg2 ;
-(void)collectionView:(id)arg0 didHighlightItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)configureCell:(id)arg0 forItem:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif
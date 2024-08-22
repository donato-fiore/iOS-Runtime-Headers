// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCOMBINEDVISUALIDENTITYEDITORVIEWCONTROLLER_H
#define CNCOMBINEDVISUALIDENTITYEDITORVIEWCONTROLLER_H

@class UIViewController, NSString, UISegmentedControl;
@protocol CNVisualIdentityAvatarStyleEditorViewControllerDelegate, CNVisualIdentityItemEditorViewControllerDelegate;


#import "CNPhotoPickerDataSource.h"
#import "CNVisualIdentityAvatarStyleEditorViewController.h"

@interface CNCombinedVisualIdentityEditorViewController : UIViewController <CNVisualIdentityAvatarStyleEditorViewControllerDelegate>



@property (retain, nonatomic) CNPhotoPickerDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNVisualIdentityItemEditorViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CNVisualIdentityAvatarStyleEditorViewController *emojiEditor; // ivar: _emojiEditor
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UISegmentedControl *segmentedControl; // ivar: _segmentedControl
@property (retain, nonatomic) CNVisualIdentityAvatarStyleEditorViewController *selectedEditor; // ivar: _selectedEditor
@property (readonly) Class superclass;
@property (retain, nonatomic) CNVisualIdentityAvatarStyleEditorViewController *textEditor; // ivar: _textEditor


+(id)log;
-(id)_newStyleEditorWithItem:(id)arg0 ;
-(id)initWithProviderItem:(id)arg0 dataSource:(id)arg1 ;
-(id)updatedProviderItem;
-(void)_segmentedControlDidChange:(id)arg0 ;
-(void)_updateEditorsVisibility;
-(void)avatarStyleEditor:(id)arg0 didUpdateItem:(id)arg1 ;
-(void)didTapCancel;
-(void)didTapDone;
-(void)setupBarButtonItems;
-(void)setupEditors;
-(void)setupSegmentedControl;
-(void)updateDoneButtonEnabledState;
-(void)viewDidLoad;


@end


#endif
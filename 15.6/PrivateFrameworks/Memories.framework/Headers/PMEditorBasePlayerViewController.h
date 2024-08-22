// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMEDITORBASEPLAYERVIEWCONTROLLER_H
#define PMEDITORBASEPLAYERVIEWCONTROLLER_H

@class UIViewController, NSLayoutConstraint, UIView;
@protocol PMEditorPlayerViewDelegate, PMEditorToolbarOwner;



@interface PMEditorBasePlayerViewController : UIViewController

@property (retain, nonatomic) NSLayoutConstraint *playerContainerHeightConstraint; // ivar: _playerContainerHeightConstraint
@property (retain, nonatomic) UIView *playerContainerView; // ivar: _playerContainerView
@property (retain, nonatomic) NSLayoutConstraint *playerContainerWidthConstraint; // ivar: _playerContainerWidthConstraint
@property (weak, nonatomic) NSObject<PMEditorPlayerViewDelegate> *playerViewDelegate; // ivar: _playerViewDelegate
@property (retain, nonatomic) UIView *snapshotView; // ivar: _snapshotView
@property (retain, nonatomic) NSLayoutConstraint *tableHeaderHeightConstraint; // ivar: _tableHeaderHeightConstraint
@property (retain, nonatomic) UIView *tableHeaderWithSpaceView; // ivar: _tableHeaderWithSpaceView
@property (weak, nonatomic) NSObject<PMEditorToolbarOwner> *toolbarOwner; // ivar: _toolbarOwner


-(CGFloat)heightForPlayerView;
-(struct CGSize )sizeForChildContentContainer:(id)arg0 withParentContainerSize:(struct CGSize )arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICONTEXTMENUACTIONSONLYVIEWCONTROLLER_H
#define _UICONTEXTMENUACTIONSONLYVIEWCONTROLLER_H



#import "UIViewController.h"
#import "UITargetedPreview.h"

@interface _UIContextMenuActionsOnlyViewController : UIViewController

@property (retain, nonatomic) UITargetedPreview *sourcePreview; // ivar: _sourcePreview


-(BOOL)_canInfluenceSceneOrientation;
-(BOOL)_canShowWhileLocked;
-(id)initWithTargetedPreview:(id)arg0 ;
-(struct CGSize )preferredContentSize;
-(void)viewDidLoad;


@end


#endif
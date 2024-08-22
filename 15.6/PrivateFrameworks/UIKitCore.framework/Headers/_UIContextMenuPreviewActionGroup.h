// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICONTEXTMENUPREVIEWACTIONGROUP_H
#define _UICONTEXTMENUPREVIEWACTIONGROUP_H

@class UIActionGroup;


#import "UIViewController.h"

@interface _UIContextMenuPreviewActionGroup : UIActionGroup

@property (copy, nonatomic) id *previewHandler; // ivar: _previewHandler
@property (retain, nonatomic) UIViewController *previewViewController; // ivar: _previewViewController


+(id)groupWithChildren:(id)arg0 previewViewController:(id)arg1 previewHandler:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif
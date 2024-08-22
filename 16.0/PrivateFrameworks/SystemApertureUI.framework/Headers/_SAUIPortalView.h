// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SAUIPORTALVIEW_H
#define _SAUIPORTALVIEW_H

@class UIView;



@interface _SAUIPortalView : UIView

@property (retain, nonatomic) UIView *sourceView; // ivar: _sourceView


+(Class)layerClass;
-(id)portalLayer;
-(void)_configurePortalViewIfNeeded;
-(void)didMoveToWindow;


@end


#endif
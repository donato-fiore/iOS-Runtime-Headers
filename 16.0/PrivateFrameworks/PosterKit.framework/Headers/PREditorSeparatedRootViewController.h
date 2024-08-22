// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PREDITORSEPARATEDROOTVIEWCONTROLLER_H
#define PREDITORSEPARATEDROOTVIEWCONTROLLER_H

@class NSMutableDictionary, UIView;


#import "PREditorRootViewController.h"

@interface PREditorSeparatedRootViewController : PREditorRootViewController {
    NSMutableDictionary *_viewsForLook;
}


@property (retain, nonatomic) UIView *overscrollView; // ivar: _overscrollView
@property (retain, nonatomic) UIView *underscrollView; // ivar: _underscrollView


-(id)currentLookViews;
-(id)viewsForLook:(id)arg0 ;
-(void)loadView;
-(void)looksDidChange;
-(void)looksWillChange;
-(void)viewDidLayoutSubviews;


@end


#endif
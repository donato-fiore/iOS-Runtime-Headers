// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SLIDINGPANEVIEWSTATE_H
#define SLIDINGPANEVIEWSTATE_H

@class NSLayoutConstraint, UIViewController, UIVisualEffectView;

#import <Foundation/Foundation.h>

#import "ISPaneFrameView.h"

@interface SlidingPaneViewState : NSObject

@property (nonatomic) NSUInteger edge; // ivar: _edge
@property (retain, nonatomic) NSLayoutConstraint *paneHorizontalPositionConstraint; // ivar: _paneHorizontalPositionConstraint
@property (retain, nonatomic) NSLayoutConstraint *paneVerticalPositionConstraint; // ivar: _paneVerticalPositionConstraint
@property (retain, nonatomic) ISPaneFrameView *paneView; // ivar: _paneView
@property (retain, nonatomic) UIViewController *paneViewController; // ivar: _paneViewController
@property (nonatomic) BOOL shouldNotifyOfPaneSizeChanges; // ivar: _shouldNotifyOfPaneSizeChanges
@property (retain, nonatomic) UIVisualEffectView *visualEffectView; // ivar: _visualEffectView


-(id)initWithViewController:(id)arg0 edge:(NSUInteger)arg1 ;
-(void)dealloc;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLACTIONBUTTONSPRESENTINGVIEW_H
#define PLACTIONBUTTONSPRESENTINGVIEW_H

@class UIView;


#import "PLPlatterActionButtonsView.h"

@interface PLActionButtonsPresentingView : UIView

@property (retain, nonatomic) PLPlatterActionButtonsView *actionButtonsView; // ivar: _actionButtonsView
@property (nonatomic) BOOL defaultActionTriggered; // ivar: _defaultActionTriggered
@property (nonatomic) NSUInteger interfaceEdge; // ivar: _interfaceEdge
@property (nonatomic) NSUInteger layoutLocation; // ivar: _layoutLocation


-(id)initWithActionButtonsView:(id)arg0 interfaceEdge:(NSUInteger)arg1 layoutLocation:(NSUInteger)arg2 ;


@end


#endif
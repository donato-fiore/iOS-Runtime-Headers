// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIMORPHINGVIEW_H
#define _UIMORPHINGVIEW_H

@class NSMutableOrderedSet;


#import "UIView.h"

@interface _UIMorphingView : UIView

@property (retain, nonatomic) NSMutableOrderedSet *contentViews; // ivar: _contentViews
@property (nonatomic) CGRect initialBounds; // ivar: _initialBounds
@property (weak, nonatomic) UIView *opacityPairSourceView; // ivar: _opacityPairSourceView
@property (nonatomic) CGFloat progress; // ivar: _progress
@property (nonatomic) BOOL useOpacityPairFilter; // ivar: _useOpacityPairFilter


-(id)_currentDestinationView;
-(void)_updateMorphProgress;
-(void)addContentView:(id)arg0 ;


@end


#endif
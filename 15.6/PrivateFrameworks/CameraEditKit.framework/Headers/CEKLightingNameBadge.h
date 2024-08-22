// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CEKLIGHTINGNAMEBADGE_H
#define CEKLIGHTINGNAMEBADGE_H

@class UIView;


#import "CEKBadgeTextView.h"

@interface CEKLightingNameBadge : CEKBadgeTextView

@property (retain, nonatomic, setter=_setSnapshotView:) UIView *_snapshotView; // ivar: __snapshotView
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (nonatomic) NSInteger lightingType; // ivar: _lightingType


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateColorsAnimated:(BOOL)arg0 ;
-(void)_updateText;


@end


#endif
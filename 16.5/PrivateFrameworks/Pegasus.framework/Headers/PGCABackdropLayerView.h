// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGCABACKDROPLAYERVIEW_H
#define PGCABACKDROPLAYERVIEW_H

@class UIView, UIColor, NSHashTable;


#import "PGCABackdropLayerView.h"
#import "PGCABackdropLayer.h"

@interface PGCABackdropLayerView : UIView

@property (copy, nonatomic) UIColor *customBackgroundColor; // ivar: _customBackgroundColor
@property (readonly, nonatomic) NSHashTable *dependents; // ivar: _dependents
@property (weak, nonatomic) PGCABackdropLayerView *groupLeader; // ivar: _groupLeader
@property (readonly, nonatomic) PGCABackdropLayer *layer;


+(id)materialFilters;
+(id)reducedTransparencyColor;
-(BOOL)_hasAnyDependentsThatWantsCapturedBlur;
-(BOOL)_isCaptureOnly;
-(BOOL)_isTransparentOrHasTransparentAncestor;
-(BOOL)_wantsCapturedBlur;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(NSInteger)_preferredEffect;
-(id)_preferredBackgroundColor;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 captureOnly:(BOOL)arg1 ;
-(void)_addDependent:(id)arg0 ;
-(void)_ensureDependents;
-(void)_enumerateDependents:(id)arg0 ;
-(void)_removeDependent:(id)arg0 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)updateEffects;


@end


#endif
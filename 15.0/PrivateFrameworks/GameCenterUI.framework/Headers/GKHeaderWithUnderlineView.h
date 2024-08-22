// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKHEADERWITHUNDERLINEVIEW_H
#define GKHEADERWITHUNDERLINEVIEW_H

@class UICollectionReusableView, NSArray, NSMutableDictionary, UIView, UIImageView;



@interface GKHeaderWithUnderlineView : UICollectionReusableView

@property (nonatomic) BOOL didSetupConstraints; // ivar: _didSetupConstraints
@property (retain, nonatomic) NSArray *gutterConstraints; // ivar: _gutterConstraints
@property (nonatomic) BOOL isPinned; // ivar: _isPinned
@property (nonatomic) CGFloat leadingMargin; // ivar: _leadingMargin
@property (retain, nonatomic) NSMutableDictionary *metrics; // ivar: _metrics
@property (retain, nonatomic) UIView *pinnedBackdropView; // ivar: _pinnedBackdropView
@property (retain, nonatomic) UIImageView *shadowView; // ivar: _shadowView
@property (nonatomic) CGFloat trailingMargin; // ivar: _trailingMargin
@property (nonatomic) BOOL underlineHasRightMargin; // ivar: _underlineHasRightMargin
@property (retain, nonatomic) UIView *underlineView; // ivar: _underlineView


+(BOOL)requiresConstraintBasedLayout;
+(id)macMetrics;
+(id)padMetrics;
+(id)phoneMetrics;
+(void)initialize;
-(BOOL)allowsVibrancy;
-(BOOL)drawsUnderline;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)applyLayoutAttributes:(id)arg0 ;
-(void)establishConstraints;
-(void)pinningStateChangedTo:(BOOL)arg0 ;
-(void)updateConstraints;
-(void)updateGutterConstraints;


@end


#endif
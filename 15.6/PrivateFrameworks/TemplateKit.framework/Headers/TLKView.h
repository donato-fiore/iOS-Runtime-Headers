// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TLKVIEW_H
#define TLKVIEW_H

@class UIView, NSString;
@protocol TLKObserver, TLKObservable;


#import "TLKAppearance.h"

@interface TLKView : UIView <TLKObserver, TLKObservable>



@property (nonatomic) NSInteger batchUpdateCount; // ivar: batchUpdateCount
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) UIView *leadingTextView; // ivar: _leadingTextView
@property (weak) NSObject<TLKObserver> *observer; // ivar: observer
@property (readonly) Class superclass;
@property (retain, nonatomic) TLKAppearance *tlkAppearance; // ivar: _tlkAppearance
@property (readonly) BOOL usesDefaultLayoutMargins;


+(Class)layerClass;
+(struct UIEdgeInsets )defaultLayoutMargins;
+(void)enableLightKeylineStroke:(BOOL)arg0 forView:(id)arg1 ;
+(void)enableShadow:(BOOL)arg0 forView:(id)arg1 ;
+(void)makeContainerShadowCompatible:(id)arg0 ;
-(BOOL)isLayoutSizeDependentOnPerpendicularAxis;
-(id)init;
-(id)setupContentView;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )defaultBaselineRelativeLayoutMargins;
-(struct UIEdgeInsets )effectiveLayoutMargins;
-(void)disableUnbatchedUpdates;
-(void)layoutMarginsDidChange;
-(void)layoutSubviews;
-(void)observedPropertiesChanged;
-(void)performBatchUpdates:(id)arg0 ;
-(void)propertiesDidChange;


@end


#endif
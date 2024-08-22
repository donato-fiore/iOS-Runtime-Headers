// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OBTABLEHEADERFOOTERVIEW_H
#define OBTABLEHEADERFOOTERVIEW_H

@class UIView, NSArray;



@interface OBTableHeaderFooterView : UIView

@property (retain, nonatomic) NSArray *hostedConstraints; // ivar: _hostedConstraints
@property (retain, nonatomic) UIView *hostedView; // ivar: _hostedView
@property (nonatomic) UIEdgeInsets hostedViewPadding; // ivar: _hostedViewPadding
@property (retain, nonatomic) NSArray *internalContentConstraints; // ivar: _internalContentConstraints
@property (nonatomic) UIEdgeInsets internalContentPadding; // ivar: _internalContentPadding
@property (retain, nonatomic) UIView *internalContentView; // ivar: _internalContentView
@property (nonatomic) NSUInteger layout; // ivar: _layout


-(id)initWithLayout:(NSUInteger)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_applyLayout;


@end


#endif
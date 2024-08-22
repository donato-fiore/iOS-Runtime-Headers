// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUACTIVITYACCESSORYVIEW_H
#define MRUACTIVITYACCESSORYVIEW_H

@class UIView, NSString;
@protocol SBUISystemApertureAccessoryView;



@interface MRUActivityAccessoryView : UIView <SBUISystemApertureAccessoryView>



@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (nonatomic) CGPoint contentOffset; // ivar: _contentOffset
@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGSize size; // ivar: _size
@property (readonly) Class superclass;


-(id)initWithContentView:(id)arg0 size:(struct CGSize )arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 forLayoutMode:(NSInteger)arg1 ;
-(void)layoutSubviews;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUSESSIONACCESSORYVIEW_H
#define MRUSESSIONACCESSORYVIEW_H

@class UIView, NSString;
@protocol SBUISystemApertureAccessoryView;



@interface MRUSessionAccessoryView : UIView <SBUISystemApertureAccessoryView>

 {
    CGSize _compactSize;
    CGSize _minimalSize;
}


@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (nonatomic) CGPoint contentOffset; // ivar: _contentOffset
@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithContentView:(id)arg0 ;
-(id)initWithContentView:(id)arg0 compactSize:(struct CGSize )arg1 minimalSize:(struct CGSize )arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 forLayoutMode:(NSInteger)arg1 ;
-(void)layoutSubviews;


@end


#endif
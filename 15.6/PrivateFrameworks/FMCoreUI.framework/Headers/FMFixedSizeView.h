// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FMFIXEDSIZEVIEW_H
#define FMFIXEDSIZEVIEW_H

@class UIView;



@interface FMFixedSizeView : UIView

@property (nonatomic) CGSize fixedIntrinsicSize; // ivar: _fixedIntrinsicSize


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)setIntrinsicContentSize:(struct CGSize )arg0 ;


@end


#endif
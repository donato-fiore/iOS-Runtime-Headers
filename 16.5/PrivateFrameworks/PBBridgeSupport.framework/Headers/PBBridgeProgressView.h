// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBBRIDGEPROGRESSVIEW_H
#define PBBRIDGEPROGRESSVIEW_H

@class UIView, UIImageView;



@interface PBBridgeProgressView : UIView

@property (retain, nonatomic) UIImageView *appleLogo; // ivar: _appleLogo
@property (nonatomic) CGFloat currentProgress; // ivar: _currentProgress
@property (nonatomic) NSUInteger style; // ivar: _style
@property (nonatomic) NSUInteger version; // ivar: _version
@property (nonatomic) NSUInteger watchSize; // ivar: _watchSize


-(CGFloat)_tickLength;
-(id)initWithStyle:(NSUInteger)arg0 ;
-(id)initWithStyle:(NSUInteger)arg0 andVersion:(NSUInteger)arg1 ;
-(id)initWithStyle:(NSUInteger)arg0 andVersion:(NSUInteger)arg1 overrideSize:(NSUInteger)arg2 ;
-(struct CGSize )_size;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif
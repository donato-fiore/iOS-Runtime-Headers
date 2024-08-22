// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDBRANDLOGOVIEW_H
#define WDBRANDLOGOVIEW_H

@class UIImageView;


#import "WDCancellationToken.h"

@interface WDBrandLogoView : UIImageView

@property (retain, nonatomic) WDCancellationToken *cancellationToken; // ivar: _cancellationToken
@property (nonatomic) BOOL isFallback; // ivar: _isFallback
@property (nonatomic) CGFloat size; // ivar: _size


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithSize:(CGFloat)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateStyle;
-(void)fetchBrandable:(id)arg0 dataProvider:(id)arg1 ;
-(void)prepareForReuse;


@end


#endif
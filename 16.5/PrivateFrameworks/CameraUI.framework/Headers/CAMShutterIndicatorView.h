// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMSHUTTERINDICATORVIEW_H
#define CAMSHUTTERINDICATORVIEW_H

@class UIView, NSAttributedString;



@interface CAMShutterIndicatorView : UIView

@property (readonly, nonatomic) NSAttributedString *_indicatorText; // ivar: __indicatorText


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_commonCAMShutterIndicatorViewInitialization;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif
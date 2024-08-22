// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLDISAMBIGUATIONCOLLECTIONVIEWANIMATOR_H
#define SLDISAMBIGUATIONCOLLECTIONVIEWANIMATOR_H

@class UIViewPropertyAnimator, UICubicTimingParameters, UISpringTimingParameters;
@protocol UITimingCurveProvider;



@interface SLDisambiguationCollectionViewAnimator : UIViewPropertyAnimator <UITimingCurveProvider>



@property (readonly, nonatomic) UICubicTimingParameters *cubicTimingParameters;
@property (readonly, nonatomic) UISpringTimingParameters *springTimingParameters;
@property (readonly, nonatomic) NSInteger timingCurveType;


+(id)init;
+(id)springAnimation;
-(id)commonInit;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
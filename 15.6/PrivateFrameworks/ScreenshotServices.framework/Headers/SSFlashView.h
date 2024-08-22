// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSFLASHVIEW_H
#define SSFLASHVIEW_H

@class UIView;



@interface SSFlashView : UIView

@property (nonatomic) NSUInteger style; // ivar: _style


+(CGFloat)expectedAnimationDurationForStyle:(NSUInteger)arg0 ;
+(Class)_flashViewClass;
+(id)flashViewForStyle:(NSUInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)flashWithCompletion:(id)arg0 ;


@end


#endif
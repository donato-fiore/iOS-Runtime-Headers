// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9SEYMOURUI11TIGHTBUTTON_H
#define _TTC9SEYMOURUI11TIGHTBUTTON_H

@class UIButton;



@interface _TtC9SeymourUI11TightButton : UIButton

@property (nonatomic, readonly) CGSize intrinsicContentSize;


-(float)contentHuggingPriorityForAxis:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)setContentHuggingPriority:(float)arg0 forAxis:(NSInteger)arg1 ;
-(void)setImage:(id)arg0 forState:(NSUInteger)arg1 ;


@end


#endif
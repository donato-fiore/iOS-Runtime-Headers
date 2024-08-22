// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HACCSTACKVIEW_H
#define HACCSTACKVIEW_H

@class UIStackView;



@interface HACCStackView : UIStackView



+(CGFloat)separatorHeight;
-(void)addArrangedSubview:(id)arg0 andSeparator:(BOOL)arg1 withIndent:(CGFloat)arg2 ;
-(void)addArrangedSubview:(id)arg0 withPartialSeparator:(BOOL)arg1 ;
-(void)addArrangedSubview:(id)arg0 withSeparator:(BOOL)arg1 ;
-(void)removeArrangedSubview:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCPROFILETITLEPAGESUBTITLECELL_H
#define MCPROFILETITLEPAGESUBTITLECELL_H

@class UITableViewCell, NSString, UILabel;
@protocol MCUIScrollAnimationResponder;



@interface MCProfileTitlePageSubtitleCell : UITableViewCell <MCUIScrollAnimationResponder>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_updateConstraintsWithLabel:(id)arg0 ;
-(void)updateProgressWithTranslationDistance:(CGFloat)arg0 referenceDistance:(CGFloat)arg1 isScrolling:(BOOL)arg2 ;


@end


#endif
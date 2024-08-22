// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STTABLECELL_H
#define STTABLECELL_H

@class PSTableCell, NSMutableArray, UILayoutGuide, UIViewController, NSArray;



@interface STTableCell : PSTableCell

@property (readonly) NSMutableArray *childViewControllers; // ivar: _childViewControllers
@property (readonly, nonatomic) UILayoutGuide *contentLayoutGuide; // ivar: _contentLayoutGuide
@property (weak) UIViewController *parentViewController; // ivar: _parentViewController
@property (copy, nonatomic) NSArray *rtlContentLayoutGuideConstraints; // ivar: _rtlContentLayoutGuideConstraints


-(BOOL)canReload;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(void)layoutSubviews;
-(void)willMoveToSuperview:(id)arg0 ;


@end


#endif
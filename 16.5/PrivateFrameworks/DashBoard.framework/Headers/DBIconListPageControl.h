// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBICONLISTPAGECONTROL_H
#define DBICONLISTPAGECONTROL_H

@class SBIconListPageControl;



@interface DBIconListPageControl : SBIconListPageControl

@property (nonatomic) BOOL showsButtons; // ivar: _showsButtons


-(CGFloat)_indicatorSpacing;
-(CGFloat)defaultHeight;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif
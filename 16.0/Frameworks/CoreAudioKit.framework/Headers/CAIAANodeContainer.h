// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAIAANODECONTAINER_H
#define CAIAANODECONTAINER_H

@class UIScrollView;



@interface CAIAANodeContainer : UIScrollView

@property NSInteger numPages; // ivar: _numPages


+(void)initialize;
-(CGFloat)contentWidth;
-(CGFloat)minWidth;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif
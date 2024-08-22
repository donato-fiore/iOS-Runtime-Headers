// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPSINFORMATIONSCROLLVIEW_H
#define CPSINFORMATIONSCROLLVIEW_H

@class UIScrollView, NSMutableArray;
@protocol CPSInformationScrollViewDelegate;



@interface CPSInformationScrollView : UIScrollView

@property (retain, nonatomic) NSMutableArray *focusWaypoints; // ivar: _focusWaypoints
@property (weak, nonatomic) NSObject<CPSInformationScrollViewDelegate> *scrollviewDelegate; // ivar: _scrollviewDelegate


-(void)setContentSize:(struct CGSize )arg0 ;


@end


#endif
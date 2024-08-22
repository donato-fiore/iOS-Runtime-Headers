// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKHOSTINGAREALAYOUTVIEW_H
#define HKHOSTINGAREALAYOUTVIEW_H

@class UIView;



@interface HKHostingAreaLayoutView : UIView

@property (retain, nonatomic) UIView *hostedView; // ivar: _hostedView


+(id)colorBackgroundViewHostingView:(id)arg0 ;
+(id)viewHostingView:(id)arg0 ;
-(BOOL)translatesAutoresizingMaskIntoConstraints;
-(struct CGSize )intrinsicContentSize;


@end


#endif
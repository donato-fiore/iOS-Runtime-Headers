// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKHAIRLINEVIEW_H
#define GKHAIRLINEVIEW_H

@class UIView;



@interface GKHairlineView : UIView

@property (nonatomic) NSInteger alignment; // ivar: _alignment


+(id)hairlineViewForAlignment:(NSInteger)arg0 ;
-(id)init;
-(struct CGSize )intrinsicContentSize;
-(void)sizeToFit;


@end


#endif
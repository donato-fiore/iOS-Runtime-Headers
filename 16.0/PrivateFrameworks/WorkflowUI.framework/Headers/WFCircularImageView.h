// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCIRCULARIMAGEVIEW_H
#define WFCIRCULARIMAGEVIEW_H

@class UIImageView;



@interface WFCircularImageView : UIImageView

@property (nonatomic, getter=isCircular) BOOL circular; // ivar: _circular
@property (nonatomic) BOOL hasBorder; // ivar: _hasBorder


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif
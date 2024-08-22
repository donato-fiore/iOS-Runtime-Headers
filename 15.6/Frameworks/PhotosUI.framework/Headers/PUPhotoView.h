// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUPHOTOVIEW_H
#define PUPHOTOVIEW_H

@class UIView;


#import "PUPhotoViewContentHelper.h"

@interface PUPhotoView : UIView

@property (readonly, nonatomic) PUPhotoViewContentHelper *contentHelper; // ivar: _contentHelper


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif
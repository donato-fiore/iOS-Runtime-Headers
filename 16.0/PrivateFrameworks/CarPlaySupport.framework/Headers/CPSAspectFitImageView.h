// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPSASPECTFITIMAGEVIEW_H
#define CPSASPECTFITIMAGEVIEW_H

@class UIImageView, NSLayoutConstraint;



@interface CPSAspectFitImageView : UIImageView

@property (retain, nonatomic) NSLayoutConstraint *aspectConstraint; // ivar: _aspectConstraint


-(id)init;
-(void)_updateConstraints;
-(void)setImage:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DOCBORDEREDFITTINGIMAGEVIEW_H
#define DOCBORDEREDFITTINGIMAGEVIEW_H



#import "DOCFittingImageView.h"

@interface DOCBorderedFittingImageView : DOCFittingImageView

@property (nonatomic) BOOL addDecoration; // ivar: _addDecoration


-(void)layoutSubviews;
-(void)setFittingSize:(struct CGSize )arg0 ;
-(void)updateImage:(id)arg0 addDecoration:(BOOL)arg1 ;


@end


#endif
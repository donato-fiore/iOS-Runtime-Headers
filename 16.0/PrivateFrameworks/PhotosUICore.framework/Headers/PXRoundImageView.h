// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXROUNDIMAGEVIEW_H
#define PXROUNDIMAGEVIEW_H

@class UIImageView, PHPerson;



@interface PXRoundImageView : UIImageView

@property (nonatomic) int currentRequestID; // ivar: _currentRequestID
@property (nonatomic) CGSize currentRequestSize; // ivar: _currentRequestSize
@property (retain, nonatomic) PHPerson *representedPerson; // ivar: _representedPerson


-(CGFloat)displayScale;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateCorner;
-(void)_updateImageForFaceCropRequestID:(int)arg0 image:(id)arg1 contentsRect:(struct CGRect )arg2 error:(id)arg3 ;
-(void)_updateImageIfNeeded;
-(void)layoutSubviews;


@end


#endif
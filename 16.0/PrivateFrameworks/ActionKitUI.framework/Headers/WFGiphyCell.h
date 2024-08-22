// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFGIPHYCELL_H
#define WFGIPHYCELL_H

@class UICollectionViewCell, NSURLSessionDataTask, UIImageView, UIActivityIndicatorView, WFGiphyObject;



@interface WFGiphyCell : UICollectionViewCell

@property (weak, nonatomic) NSURLSessionDataTask *dataTask; // ivar: _dataTask
@property (weak, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (weak, nonatomic) UIActivityIndicatorView *indicatorView; // ivar: _indicatorView
@property (weak, nonatomic) WFGiphyObject *object; // ivar: _object
@property (weak, nonatomic) UIImageView *selectedImageView; // ivar: _selectedImageView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif
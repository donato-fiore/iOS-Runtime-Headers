// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLTHUMBNAILVIEW_H
#define QLTHUMBNAILVIEW_H

@class UIView, UIImage;



@interface QLThumbnailView : UIView

@property BOOL alwaysVisible; // ivar: _alwaysVisible
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property NSInteger pageNumber; // ivar: _pageNumber
@property CGRect unselectedFrame; // ivar: _unselectedFrame


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif
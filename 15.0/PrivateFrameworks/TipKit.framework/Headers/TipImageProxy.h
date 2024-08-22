// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIPIMAGEPROXY_H
#define TIPIMAGEPROXY_H

@class UIImageView, UIImage;



@interface TipImageProxy : UIImageView {
    ? shouldDisplay;
}


@property (nonatomic) BOOL clipsToBounds;
@property (nonatomic, retain) UIImage *image;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithImage:(id)arg0 ;
-(id)initWithImage:(id)arg0 highlightedImage:(id)arg1 ;
-(void)addSubview:(id)arg0 ;


@end


#endif
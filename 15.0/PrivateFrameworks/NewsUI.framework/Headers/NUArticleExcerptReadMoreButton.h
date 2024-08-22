// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUARTICLEEXCERPTREADMOREBUTTON_H
#define NUARTICLEEXCERPTREADMOREBUTTON_H

@class UIButton, UIImageView, UILabel, NSURL;



@interface NUArticleExcerptReadMoreButton : UIButton

@property (readonly, nonatomic) UIImageView *arrowImageView; // ivar: _arrowImageView
@property (readonly, nonatomic) UILabel *domainLabel; // ivar: _domainLabel
@property (retain, nonatomic) NSURL *domainURL; // ivar: _domainURL
@property (nonatomic) NSUInteger excerptLenthType; // ivar: _excerptLenthType
@property (readonly, nonatomic) UILabel *readStoryLabel; // ivar: _readStoryLabel


+(CGFloat)readMoreButtonHeight;
+(id)arrowImage;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif
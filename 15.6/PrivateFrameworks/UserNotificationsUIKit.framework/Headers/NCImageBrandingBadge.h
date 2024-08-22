// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NCIMAGEBRANDINGBADGE_H
#define NCIMAGEBRANDINGBADGE_H

@class UIImageView, NSString, UIImage;
@protocol NCImageBrandingBadging;


#import "NCBadgedIconView.h"

@interface NCImageBrandingBadge : UIImageView <NCImageBrandingBadging>



@property (nonatomic) NSUInteger badgeLocation; // ivar: _badgeLocation
@property (readonly, nonatomic) NSInteger badgeType;
@property (weak, nonatomic) NCBadgedIconView *badgedIconView; // ivar: _badgedIconView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) UIImage *image;
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithImage:(id)arg0 ;


@end


#endif
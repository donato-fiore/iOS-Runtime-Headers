// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIIMAGEINDEXBARENTRY_H
#define SKUIIMAGEINDEXBARENTRY_H

@class UIImage;


#import "SKUIIndexBarEntry.h"

@interface SKUIImageIndexBarEntry : SKUIIndexBarEntry

@property (readonly, nonatomic) UIImage *image; // ivar: _image


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)entryImage;
-(id)initWithImage:(id)arg0 ;
-(struct CGSize )_calculatedContentSize;
-(void)_drawContentInRect:(struct CGRect )arg0 ;


@end


#endif
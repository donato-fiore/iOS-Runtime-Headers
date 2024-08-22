// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSTROKESELECTIONIMAGE_H
#define PKSTROKESELECTIONIMAGE_H

@class UIImage;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PKStrokeSelectionImageConfig.h"

@interface PKStrokeSelectionImage : NSObject <NSCopying>



@property (retain, nonatomic) UIImage *addImage; // ivar: _addImage
@property (readonly, nonatomic) UIImage *combinedImage;
@property (readonly, nonatomic) PKStrokeSelectionImageConfig *config; // ivar: _config
@property (readonly, nonatomic) PKStrokeSelectionImageConfig *fullSizeConfig; // ivar: _fullSizeConfig
@property (copy, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) UIImage *mulImage; // ivar: _mulImage


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithImage:(id)arg0 config:(id)arg1 fullSizeConfig:(id)arg2 ;


@end


#endif
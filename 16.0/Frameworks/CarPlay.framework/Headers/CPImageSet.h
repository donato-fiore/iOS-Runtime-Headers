// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPIMAGESET_H
#define CPIMAGESET_H

@class UIImage;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CPImageSetAssetRegistration.h"

@interface CPImageSet : NSObject <NSSecureCoding>



@property (retain, nonatomic) CPImageSetAssetRegistration *currentAssetRegistration; // ivar: _currentAssetRegistration
@property (retain, nonatomic) UIImage *darkContentImage; // ivar: _darkContentImage
@property (retain, nonatomic) UIImage *lightContentImage; // ivar: _lightContentImage


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)image;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithImage:(id)arg0 ;
-(id)initWithImage:(id)arg0 treatmentBlock:(id)arg1 ;
-(id)initWithLightContentImage:(id)arg0 darkContentImage:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)resizeImagesToSize:(struct CGSize )arg0 ;
-(void)swapStyles;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKCOMPLICATIONNOCONTENTIMAGES_H
#define NTKCOMPLICATIONNOCONTENTIMAGES_H

@class UIImage;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface NTKComplicationNoContentImages : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) UIImage *circularSmallImage; // ivar: _circularSmallImage
@property (retain, nonatomic) UIImage *extraLargeImage; // ivar: _extraLargeImage
@property (retain, nonatomic) UIImage *modularSmallImage; // ivar: _modularSmallImage
@property (retain, nonatomic) UIImage *utilitarianSmallImage; // ivar: _utilitarianSmallImage


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
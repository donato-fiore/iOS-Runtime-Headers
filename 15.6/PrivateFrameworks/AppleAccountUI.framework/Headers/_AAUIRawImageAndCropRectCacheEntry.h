// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _AAUIRAWIMAGEANDCROPRECTCACHEENTRY_H
#define _AAUIRAWIMAGEANDCROPRECTCACHEENTRY_H

@class NSDate, UIImage, NSString;

#import <Foundation/Foundation.h>


@interface _AAUIRawImageAndCropRectCacheEntry : NSObject

@property (readonly, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic) CGRect rawCropRect; // ivar: _rawCropRect
@property (readonly, nonatomic) UIImage *rawImage; // ivar: _rawImage
@property (readonly, nonatomic) NSString *serverCacheTag; // ivar: _serverCacheTag
@property (readonly, nonatomic, getter=isValid) BOOL valid;


+(id)entryWithRawImage:(id)arg0 rawCropRect:(struct CGRect )arg1 serverCacheTag:(id)arg2 ;


@end


#endif
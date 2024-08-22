// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXREPEATABLEIMAGEFILL_H
#define SXREPEATABLEIMAGEFILL_H

@class NSString;


#import "SXFill.h"

@interface SXRepeatableImageFill : SXFill

@property (readonly, nonatomic) _SXConvertibleValue height;
@property (readonly, nonatomic) NSString *imageIdentifier;
@property (readonly, nonatomic) NSUInteger repeat;
@property (readonly, nonatomic) _SXConvertibleValue width;


-(NSUInteger)repeatWithValue:(id)arg0 withType:(int)arg1 ;


@end


#endif
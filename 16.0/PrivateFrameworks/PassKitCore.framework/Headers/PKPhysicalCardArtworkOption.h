// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPHYSICALCARDARTWORKOPTION_H
#define PKPHYSICALCARDARTWORKOPTION_H

@class NSURL, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKImage.h"

@interface PKPhysicalCardArtworkOption : NSObject <NSSecureCoding>



@property (retain, nonatomic) PKImage *frontFaceImage; // ivar: _frontFaceImage
@property (retain, nonatomic) NSURL *frontFaceImageURL; // ivar: _frontFaceImageURL
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSUInteger maximumEstimatedShippingTime; // ivar: _maximumEstimatedShippingTime
@property (readonly, nonatomic) NSUInteger minimumEstimatedShippingTime; // ivar: _minimumEstimatedShippingTime
@property (readonly, nonatomic) BOOL optionUnavailable; // ivar: _optionUnavailable
@property (readonly, nonatomic) NSInteger shippingTimeUnit; // ivar: _shippingTimeUnit


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
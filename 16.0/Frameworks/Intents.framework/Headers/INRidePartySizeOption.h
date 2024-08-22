// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INRIDEPARTYSIZEOPTION_H
#define INRIDEPARTYSIZEOPTION_H

@class NSString;
@protocol INRidePartySizeOptionExport, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INPriceRange.h"

@interface INRidePartySizeOption : NSObject <INRidePartySizeOptionExport, NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _NSRange partySizeRange; // ivar: _partySizeRange
@property (readonly, nonatomic) INPriceRange *priceRange; // ivar: _priceRange
@property (readonly, nonatomic) NSString *sizeDescription; // ivar: _sizeDescription
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPartySizeRange:(struct _NSRange )arg0 sizeDescription:(id)arg1 priceRange:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
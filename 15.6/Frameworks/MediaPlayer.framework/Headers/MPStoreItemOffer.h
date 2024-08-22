// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSTOREITEMOFFER_H
#define MPSTOREITEMOFFER_H

@class NSArray, NSString, NSDictionary, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MPStoreItemOffer : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *assets;
@property (readonly, copy, nonatomic) NSString *buyParameters;
@property (readonly, copy, nonatomic) NSString *formattedPrice;
@property (readonly, copy, nonatomic) NSDictionary *lookupDictionary; // ivar: _lookupDictionary
@property (readonly, copy, nonatomic) NSString *offerType;
@property (readonly, copy, nonatomic) NSNumber *price;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)actionTextForType:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLookupDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
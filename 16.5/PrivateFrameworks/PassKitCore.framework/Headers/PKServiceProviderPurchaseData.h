// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSERVICEPROVIDERPURCHASEDATA_H
#define PKSERVICEPROVIDERPURCHASEDATA_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKServiceProviderPurchaseData : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSDictionary *dictionaryRepresentation; // ivar: _dictionaryRepresentation


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPKServiceProviderPurchaseData:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
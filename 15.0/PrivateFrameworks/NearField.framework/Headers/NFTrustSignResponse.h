// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NFTRUSTSIGNRESPONSE_H
#define NFTRUSTSIGNRESPONSE_H

@class NSNumber, NSString, NSData;


#import "NFTrustObject.h"
#import "NFTrustKey.h"

@interface NFTrustSignResponse : NFTrustObject

@property (retain, nonatomic) NSNumber *counterValue; // ivar: _counterValue
@property (retain, nonatomic) NFTrustKey *key; // ivar: _key
@property (readonly, nonatomic) NSString *rawData;
@property (retain, nonatomic) NSData *trustObjectInternalRawNSData; // ivar: _trustObjectInternalRawNSData


+(BOOL)supportsSecureCoding;
+(id)signResponseWithRawData:(id)arg0 counterValueData:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
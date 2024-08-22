// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCDAFADVERTISEMENT_H
#define SCDAFADVERTISEMENT_H

@class NSNumber, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SCDAFAdvertisement : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSNumber *advertHash; // ivar: _advertHash
@property (nonatomic) NSUInteger confidence; // ivar: _confidence
@property (nonatomic) NSUInteger deviceClass; // ivar: _deviceClass
@property (nonatomic) NSUInteger deviceGroup; // ivar: _deviceGroup
@property (nonatomic) NSUInteger goodnessScore; // ivar: _goodnessScore
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSUInteger productType; // ivar: _productType
@property (nonatomic) NSUInteger tieBreaker; // ivar: _tieBreaker


+(BOOL)supportsSecureCoding;
+(id)advertisementsArrayWithDictionaryRepresentation:(id)arg0 ;
+(id)arrayDictionaryRepresentation:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
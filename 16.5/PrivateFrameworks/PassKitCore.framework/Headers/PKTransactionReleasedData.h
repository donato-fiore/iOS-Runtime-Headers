// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKTRANSACTIONRELEASEDDATA_H
#define PKTRANSACTIONRELEASEDDATA_H

@class NSData, NSSet, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKTransactionReleasedDataApplication.h"

@interface PKTransactionReleasedData : NSObject <NSSecureCoding>



@property (retain, nonatomic) PKTransactionReleasedDataApplication *application; // ivar: _application
@property (retain, nonatomic) NSData *certificateData; // ivar: _certificateData
@property (retain, nonatomic) NSSet *elements; // ivar: _elements
@property (retain, nonatomic) NSURL *privacyPolicyURL; // ivar: _privacyPolicyURL


+(BOOL)supportsSecureCoding;
-(BOOL)isAgeVerificationElement:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToReleasedData:(id)arg0 ;
-(BOOL)isPortraitElement:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)verificationType;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
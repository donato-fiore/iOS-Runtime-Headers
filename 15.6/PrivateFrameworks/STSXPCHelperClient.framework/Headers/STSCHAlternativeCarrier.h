// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STSCHALTERNATIVECARRIER_H
#define STSCHALTERNATIVECARRIER_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "STSNDEFRecord.h"

@interface STSCHAlternativeCarrier : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *auxiliaryRecords; // ivar: _auxiliaryRecords
@property (retain, nonatomic) STSNDEFRecord *carrierRecord; // ivar: _carrierRecord
@property (nonatomic) NSUInteger powerState; // ivar: _powerState
@property (nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)connectionHandoverAlternativeCarrierWithBundle:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_createCarrierConfigurationRecord;
-(id)createAlternativeCarrierRecord;
-(id)createNdefRecordBundle;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNdefRecordBundle:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
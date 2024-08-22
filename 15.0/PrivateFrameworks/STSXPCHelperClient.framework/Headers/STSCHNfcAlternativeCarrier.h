// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STSCHNFCALTERNATIVECARRIER_H
#define STSCHNFCALTERNATIVECARRIER_H



#import "STSCHAlternativeCarrier.h"

@interface STSCHNfcAlternativeCarrier : STSCHAlternativeCarrier

@property (nonatomic) NSInteger maxLc; // ivar: _maxLc
@property (nonatomic) NSInteger maxLe; // ivar: _maxLe


+(BOOL)supportsSecureCoding;
+(id)connectionHandoverAlternativeCarrierWithBundle:(id)arg0 ;
-(id)_createCarrierConfigurationRecord;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMaxLcField:(NSInteger)arg0 maxLeField:(NSInteger)arg1 auxiliaryRecords:(id)arg2 ;
-(id)initWithNdefRecordBundle:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
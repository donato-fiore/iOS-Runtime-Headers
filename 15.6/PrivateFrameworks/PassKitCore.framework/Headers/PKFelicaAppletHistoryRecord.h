// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKFELICAAPPLETHISTORYRECORD_H
#define PKFELICAAPPLETHISTORYRECORD_H

@class NSNumber, NSString;
@protocol NSCopying;


#import "PKTransitAppletHistoryRecord.h"

@interface PKFelicaAppletHistoryRecord : PKTransitAppletHistoryRecord <NSCopying>



@property (copy, nonatomic) NSNumber *amountType; // ivar: _amountType
@property (copy, nonatomic) NSNumber *sectorCombination; // ivar: _sectorCombination
@property (copy, nonatomic) NSString *transactionID; // ivar: _transactionID
@property (copy, nonatomic) NSNumber *transactionType; // ivar: _transactionType


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
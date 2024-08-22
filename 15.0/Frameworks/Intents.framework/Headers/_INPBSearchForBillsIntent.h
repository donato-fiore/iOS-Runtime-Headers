// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBSEARCHFORBILLSINTENT_H
#define _INPBSEARCHFORBILLSINTENT_H

@class PBCodable, NSString;
@protocol _INPBSearchForBillsIntent, NSSecureCoding, NSCopying;


#import "_INPBBillPayeeValue.h"
#import "_INPBDateTimeRange.h"
#import "_INPBIntentMetadata.h"

@interface _INPBSearchForBillsIntent : PBCodable <_INPBSearchForBillsIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBBillPayeeValue *billPayee; // ivar: _billPayee
@property (nonatomic) int billType; // ivar: _billType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _INPBDateTimeRange *dueDateRange; // ivar: _dueDateRange
@property (readonly, nonatomic) BOOL hasBillPayee;
@property (nonatomic) BOOL hasBillType;
@property (readonly, nonatomic) BOOL hasDueDateRange;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly, nonatomic) BOOL hasPaymentDateRange;
@property (nonatomic) BOOL hasStatus;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (retain, nonatomic) _INPBDateTimeRange *paymentDateRange; // ivar: _paymentDateRange
@property (nonatomic) int status; // ivar: _status
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)billTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)statusAsString:(int)arg0 ;
-(int)StringAsBillType:(id)arg0 ;
-(int)StringAsStatus:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
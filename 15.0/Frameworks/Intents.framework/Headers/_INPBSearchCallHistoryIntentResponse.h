// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBSEARCHCALLHISTORYINTENTRESPONSE_H
#define _INPBSEARCHCALLHISTORYINTENTRESPONSE_H

@class PBCodable, NSArray, NSString;
@protocol _INPBSearchCallHistoryIntentResponse, NSSecureCoding, NSCopying;



@interface _INPBSearchCallHistoryIntentResponse : PBCodable <_INPBSearchCallHistoryIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSArray *callRecords; // ivar: _callRecords
@property (readonly, nonatomic) NSUInteger callRecordsCount;
@property (copy, nonatomic) NSString *dateCreated; // ivar: _dateCreated
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasDateCreated;
@property (readonly, nonatomic) BOOL hasStatus;
@property (readonly, nonatomic) BOOL hasTargetContact;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *status; // ivar: _status
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *targetContact; // ivar: _targetContact


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)callRecordsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)addCallRecords:(id)arg0 ;
-(void)clearCallRecords;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
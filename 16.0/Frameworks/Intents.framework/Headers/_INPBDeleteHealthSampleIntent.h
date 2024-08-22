// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBDELETEHEALTHSAMPLEINTENT_H
#define _INPBDELETEHEALTHSAMPLEINTENT_H

@class PBCodable, NSString, NSArray;
@protocol _INPBDeleteHealthSampleIntent, NSSecureCoding, NSCopying;


#import "_INPBIntentMetadata.h"

@interface _INPBDeleteHealthSampleIntent : PBCodable <_INPBDeleteHealthSampleIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (copy, nonatomic) NSArray *sampleUuids; // ivar: _sampleUuids
@property (readonly, nonatomic) NSUInteger sampleUuidsCount;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)sampleUuidsAtIndex:(NSUInteger)arg0 ;
-(void)addSampleUuids:(id)arg0 ;
-(void)clearSampleUuids;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBACTIVATECARSIGNALINTENT_H
#define _INPBACTIVATECARSIGNALINTENT_H

@class PBCodable, NSString;
@protocol _INPBActivateCarSignalIntent, NSSecureCoding, NSCopying;


#import "_INPBDataString.h"
#import "_INPBIntentMetadata.h"

@interface _INPBActivateCarSignalIntent : PBCodable <_INPBActivateCarSignalIntent, NSSecureCoding, NSCopying>

 {
    ? _signals;
    ? _has;
}


@property (retain, nonatomic) _INPBDataString *carName; // ivar: _carName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasCarName;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (readonly, nonatomic) *int signals;
@property (readonly, nonatomic) NSUInteger signalsCount;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)signalsAsString:(int)arg0 ;
-(int)StringAsSignals:(id)arg0 ;
-(int)signalsAtIndex:(NSUInteger)arg0 ;
-(void)addSignals:(int)arg0 ;
-(void)clearSignals;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
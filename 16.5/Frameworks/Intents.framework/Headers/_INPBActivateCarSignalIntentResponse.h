// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBACTIVATECARSIGNALINTENTRESPONSE_H
#define _INPBACTIVATECARSIGNALINTENTRESPONSE_H

@class PBCodable, NSString;
@protocol _INPBActivateCarSignalIntentResponse, NSSecureCoding, NSCopying;



@interface _INPBActivateCarSignalIntentResponse : PBCodable <_INPBActivateCarSignalIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _signals;
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
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
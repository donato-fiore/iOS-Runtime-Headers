// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBRUNVOICECOMMANDINTENT_H
#define _INPBRUNVOICECOMMANDINTENT_H

@class PBCodable, NSString;
@protocol _INPBRunVoiceCommandIntent, NSSecureCoding, NSCopying;


#import "_INPBIntentExecutionResult.h"
#import "_INPBIntentMetadata.h"
#import "_INPBVoiceCommandDeviceInformation.h"
#import "_INPBDataString.h"

@interface _INPBRunVoiceCommandIntent : PBCodable <_INPBRunVoiceCommandIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _INPBIntentExecutionResult *executionResult; // ivar: _executionResult
@property (readonly, nonatomic) BOOL hasExecutionResult;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly, nonatomic) BOOL hasOriginDevice;
@property (readonly, nonatomic) BOOL hasPreviousIntentIdentifier;
@property (readonly, nonatomic) BOOL hasVoiceCommand;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (retain, nonatomic) _INPBVoiceCommandDeviceInformation *originDevice; // ivar: _originDevice
@property (copy, nonatomic) NSString *previousIntentIdentifier; // ivar: _previousIntentIdentifier
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBDataString *voiceCommand; // ivar: _voiceCommand


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
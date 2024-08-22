// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBSETTASKATTRIBUTEINTENTRESPONSE_H
#define _INPBSETTASKATTRIBUTEINTENTRESPONSE_H

@class PBCodable, NSString;
@protocol _INPBSetTaskAttributeIntentResponse, NSSecureCoding, NSCopying;


#import "_INPBTask.h"

@interface _INPBSetTaskAttributeIntentResponse : PBCodable <_INPBSetTaskAttributeIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _warnings;
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasModifiedTask;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBTask *modifiedTask; // ivar: _modifiedTask
@property (readonly) Class superclass;
@property (readonly, nonatomic) *int warnings;
@property (readonly, nonatomic) NSUInteger warningsCount;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)warningsAsString:(int)arg0 ;
-(int)StringAsWarnings:(id)arg0 ;
-(int)warningsAtIndex:(NSUInteger)arg0 ;
-(void)addWarnings:(int)arg0 ;
-(void)clearWarnings;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBRESETTIMERINTENT_H
#define _INPBRESETTIMERINTENT_H

@class PBCodable, NSString;
@protocol _INPBResetTimerIntent, NSSecureCoding, NSCopying;


#import "_INPBIntentMetadata.h"
#import "_INPBTimer.h"

@interface _INPBResetTimerIntent : PBCodable <_INPBResetTimerIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) BOOL hasResetMultiple;
@property (readonly, nonatomic) BOOL hasTargetTimer;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (nonatomic) BOOL resetMultiple; // ivar: _resetMultiple
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBTimer *targetTimer; // ivar: _targetTimer


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
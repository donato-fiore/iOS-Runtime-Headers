// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBPRIVATEUPDATEMEDIAAFFINITYINTENTDATA_H
#define _INPBPRIVATEUPDATEMEDIAAFFINITYINTENTDATA_H

@class PBCodable, NSString;
@protocol _INPBPrivateUpdateMediaAffinityIntentData, NSSecureCoding, NSCopying;


#import "_INPBPrivateMediaIntentData.h"

@interface _INPBPrivateUpdateMediaAffinityIntentData : PBCodable <_INPBPrivateUpdateMediaAffinityIntentData, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasPrivateMediaIntentData;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBPrivateMediaIntentData *privateMediaIntentData; // ivar: _privateMediaIntentData
@property (readonly) Class superclass;


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
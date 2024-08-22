// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBPRIVATEADDMEDIAINTENTDATA_H
#define _INPBPRIVATEADDMEDIAINTENTDATA_H

@class PBCodable, NSArray, NSString;
@protocol _INPBPrivateAddMediaIntentData, NSSecureCoding, NSCopying;


#import "_INPBPrivateMediaIntentData.h"

@interface _INPBPrivateAddMediaIntentData : PBCodable <_INPBPrivateAddMediaIntentData, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSArray *audioSearchResults; // ivar: _audioSearchResults
@property (readonly, nonatomic) NSUInteger audioSearchResultsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasPrivateMediaIntentData;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBPrivateMediaIntentData *privateMediaIntentData; // ivar: _privateMediaIntentData
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)audioSearchResultsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)addAudioSearchResults:(id)arg0 ;
-(void)clearAudioSearchResults;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
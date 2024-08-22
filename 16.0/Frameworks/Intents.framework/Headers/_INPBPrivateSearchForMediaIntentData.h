// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBPRIVATESEARCHFORMEDIAINTENTDATA_H
#define _INPBPRIVATESEARCHFORMEDIAINTENTDATA_H

@class PBCodable, NSArray, NSString;
@protocol _INPBPrivateSearchForMediaIntentData, NSSecureCoding, NSCopying;


#import "_INPBPrivateMediaIntentData.h"

@interface _INPBPrivateSearchForMediaIntentData : PBCodable <_INPBPrivateSearchForMediaIntentData, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSArray *audioSearchResults; // ivar: _audioSearchResults
@property (readonly, nonatomic) NSUInteger audioSearchResultsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasPrivateMediaIntentData;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *internalSignals; // ivar: _internalSignals
@property (readonly, nonatomic) NSUInteger internalSignalsCount;
@property (retain, nonatomic) _INPBPrivateMediaIntentData *privateMediaIntentData; // ivar: _privateMediaIntentData
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)audioSearchResultsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)internalSignalAtIndex:(NSUInteger)arg0 ;
-(void)addAudioSearchResults:(id)arg0 ;
-(void)addInternalSignal:(id)arg0 ;
-(void)clearAudioSearchResults;
-(void)clearInternalSignals;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
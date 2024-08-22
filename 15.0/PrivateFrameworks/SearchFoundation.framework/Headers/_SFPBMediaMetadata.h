// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFPBMEDIAMETADATA_H
#define _SFPBMEDIAMETADATA_H

@class PBCodable, NSString, NSArray, NSData;
@protocol _SFPBMediaMetadata, NSSecureCoding;



@interface _SFPBMediaMetadata : PBCodable <_SFPBMediaMetadata, NSSecureCoding>



@property (copy, nonatomic) NSString *albumName; // ivar: _albumName
@property (copy, nonatomic) NSString *artistName; // ivar: _artistName
@property (copy, nonatomic) NSArray *bundleIdentifiersToExcludes; // ivar: _bundleIdentifiersToExcludes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *disambiguationTitle; // ivar: _disambiguationTitle
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *mediaName; // ivar: _mediaName
@property (copy, nonatomic) NSArray *mediaPunchouts; // ivar: _mediaPunchouts
@property (nonatomic) int mediaType; // ivar: _mediaType
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)bundleIdentifiersToExcludeCount;
-(id)bundleIdentifiersToExcludeAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)mediaPunchoutsAtIndex:(NSUInteger)arg0 ;
-(void)addBundleIdentifiersToExclude:(id)arg0 ;
-(void)addMediaPunchouts:(id)arg0 ;
-(void)clearBundleIdentifiersToExclude;
-(void)clearMediaPunchouts;
-(void)setBundleIdentifiersToExclude:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
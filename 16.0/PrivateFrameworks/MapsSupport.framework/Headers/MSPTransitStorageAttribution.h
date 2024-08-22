// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSPTRANSITSTORAGEATTRIBUTION_H
#define MSPTRANSITSTORAGEATTRIBUTION_H

@class PBCodable, PBUnknownFields, NSString, NSArray, NSMutableArray;
@protocol GEOTransitAttribution, NSCopying;



@interface MSPTransitStorageAttribution : PBCodable <GEOTransitAttribution, NSCopying>

 {
    PBUnknownFields *_unknownFields;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=_providerNames) NSArray *providerNames;
@property (retain, nonatomic) NSMutableArray *providerNames; // ivar: _providerNames
@property (readonly) Class superclass;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithAttribution:(id)arg0 ;
-(id)providerNamesAtIndex:(NSUInteger)arg0 ;
-(void)addProviderNames:(id)arg0 ;
-(void)clearProviderNames;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
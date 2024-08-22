// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCODABLEFHIRRESOURCEFORAPI_H
#define HDCODABLEFHIRRESOURCEFORAPI_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;



@interface HDCodableFHIRResourceForAPI : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *data; // ivar: _data
@property (nonatomic) NSInteger fhirVersionMajor; // ivar: _fhirVersionMajor
@property (nonatomic) NSInteger fhirVersionMinor; // ivar: _fhirVersionMinor
@property (nonatomic) NSInteger fhirVersionPatch; // ivar: _fhirVersionPatch
@property (readonly, nonatomic) BOOL hasData;
@property (nonatomic) BOOL hasFhirVersionMajor;
@property (nonatomic) BOOL hasFhirVersionMinor;
@property (nonatomic) BOOL hasFhirVersionPatch;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasLastUpdatedDate;
@property (readonly, nonatomic) BOOL hasResourceType;
@property (readonly, nonatomic) BOOL hasSourceURL;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) CGFloat lastUpdatedDate; // ivar: _lastUpdatedDate
@property (retain, nonatomic) NSString *resourceType; // ivar: _resourceType
@property (retain, nonatomic) NSString *sourceURL; // ivar: _sourceURL


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
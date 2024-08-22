// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCODABLEHEALTHOBJECT_H
#define HDCODABLEHEALTHOBJECT_H

@class PBCodable, NSString, NSData;
@protocol HDDecoding, NSCopying;


#import "HDCodableMetadataDictionary.h"

@interface HDCodableHealthObject : PBCodable <HDDecoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat creationDate; // ivar: _creationDate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger externalSyncObjectCode; // ivar: _externalSyncObjectCode
@property (nonatomic) BOOL hasCreationDate;
@property (nonatomic) BOOL hasExternalSyncObjectCode;
@property (readonly, nonatomic) BOOL hasMetadataDictionary;
@property (readonly, nonatomic) BOOL hasSourceBundleIdentifier;
@property (readonly, nonatomic) BOOL hasUuid;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HDCodableMetadataDictionary *metadataDictionary; // ivar: _metadataDictionary
@property (retain, nonatomic) NSString *sourceBundleIdentifier; // ivar: _sourceBundleIdentifier
@property (readonly) Class superclass;
@property (retain, nonatomic) NSData *uuid; // ivar: _uuid


-(BOOL)applyToObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)decodedMetadata;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
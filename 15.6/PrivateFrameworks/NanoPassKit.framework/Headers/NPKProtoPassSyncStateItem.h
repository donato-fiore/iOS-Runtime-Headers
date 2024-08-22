// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKPROTOPASSSYNCSTATEITEM_H
#define NPKPROTOPASSSYNCSTATEITEM_H

@class PBCodable, NSMutableArray, NSData, NSString;
@protocol NSCopying;



@interface NPKProtoPassSyncStateItem : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasSequenceCounter;
@property (retain, nonatomic) NSMutableArray *manifestEntrys; // ivar: _manifestEntrys
@property (retain, nonatomic) NSData *manifestHash; // ivar: _manifestHash
@property (retain, nonatomic) NSString *passTypeIdentifier; // ivar: _passTypeIdentifier
@property (nonatomic) unsigned int sequenceCounter; // ivar: _sequenceCounter
@property (retain, nonatomic) NSString *serialNumber; // ivar: _serialNumber


+(Class)manifestEntryType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)manifestEntryAtIndex:(NSUInteger)arg0 ;
-(void)addManifestEntry:(id)arg0 ;
-(void)clearManifestEntrys;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
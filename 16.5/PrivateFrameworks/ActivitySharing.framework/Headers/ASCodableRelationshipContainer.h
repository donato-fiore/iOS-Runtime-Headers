// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCODABLERELATIONSHIPCONTAINER_H
#define ASCODABLERELATIONSHIPCONTAINER_H

@class PBCodable, NSData;
@protocol NSCopying;


#import "ASCodableCloudKitRelationship.h"

@interface ASCodableRelationshipContainer : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasRelationship;
@property (readonly, nonatomic) BOOL hasRelationshipShareID;
@property (readonly, nonatomic) BOOL hasRemoteActivityShareID;
@property (readonly, nonatomic) BOOL hasRemoteRelationshipShareID;
@property (readonly, nonatomic) BOOL hasSystemFieldsOnlyRecord;
@property (nonatomic) BOOL hasVersion;
@property (retain, nonatomic) ASCodableCloudKitRelationship *relationship; // ivar: _relationship
@property (retain, nonatomic) NSData *relationshipShareID; // ivar: _relationshipShareID
@property (retain, nonatomic) NSData *remoteActivityShareID; // ivar: _remoteActivityShareID
@property (retain, nonatomic) NSData *remoteRelationshipShareID; // ivar: _remoteRelationshipShareID
@property (retain, nonatomic) NSData *systemFieldsOnlyRecord; // ivar: _systemFieldsOnlyRecord
@property (nonatomic) NSInteger version; // ivar: _version


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
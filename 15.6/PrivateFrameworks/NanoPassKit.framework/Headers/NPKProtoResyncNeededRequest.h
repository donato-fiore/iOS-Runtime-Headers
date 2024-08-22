// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKPROTORESYNCNEEDEDREQUEST_H
#define NPKPROTORESYNCNEEDEDREQUEST_H

@class PBRequest, NSMutableArray;
@protocol NSCopying;


#import "NPKProtoHash.h"

@interface NPKProtoResyncNeededRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NPKProtoHash *expectedHash; // ivar: _expectedHash
@property (nonatomic) BOOL fullResyncNeeded; // ivar: _fullResyncNeeded
@property (readonly, nonatomic) BOOL hasExpectedHash;
@property (nonatomic) BOOL hasFullResyncNeeded;
@property (nonatomic) BOOL hasResyncID;
@property (retain, nonatomic) NSMutableArray *manifestHashes; // ivar: _manifestHashes
@property (nonatomic) unsigned int resyncID; // ivar: _resyncID
@property (retain, nonatomic) NSMutableArray *uniqueIDs; // ivar: _uniqueIDs


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)manifestHashesAtIndex:(NSUInteger)arg0 ;
-(id)uniqueIDsAtIndex:(NSUInteger)arg0 ;
-(void)addManifestHashes:(id)arg0 ;
-(void)addUniqueIDs:(id)arg0 ;
-(void)clearManifestHashes;
-(void)clearUniqueIDs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
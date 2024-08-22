// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKPROTOPASSSYNCRECONCILEDSTATEUNRECOGNIZED_H
#define NPKPROTOPASSSYNCRECONCILEDSTATEUNRECOGNIZED_H

@class PBCodable, NSData;
@protocol NSCopying;


#import "NPKProtoPassSyncState.h"

@interface NPKProtoPassSyncReconciledStateUnrecognized : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasLibraryPassSyncState;
@property (readonly, nonatomic) BOOL hasUnrecognizedReconciledStateHash;
@property (nonatomic) BOOL hasUnrecognizedReconciledStateVersion;
@property (retain, nonatomic) NPKProtoPassSyncState *libraryPassSyncState; // ivar: _libraryPassSyncState
@property (retain, nonatomic) NSData *unrecognizedReconciledStateHash; // ivar: _unrecognizedReconciledStateHash
@property (nonatomic) unsigned int unrecognizedReconciledStateVersion; // ivar: _unrecognizedReconciledStateVersion


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
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKPROTOREMOVEPASSREQUEST_H
#define NPKPROTOREMOVEPASSREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;


#import "NPKProtoCatalog.h"
#import "NPKProtoHash.h"

@interface NPKProtoRemovePassRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NPKProtoCatalog *catalog; // ivar: _catalog
@property (readonly, nonatomic) BOOL hasCatalog;
@property (nonatomic) BOOL hasLastKnownResyncID;
@property (readonly, nonatomic) BOOL hasLibraryHash;
@property (nonatomic) BOOL hasResyncID;
@property (nonatomic) BOOL hasSyncID;
@property (nonatomic) unsigned int lastKnownResyncID; // ivar: _lastKnownResyncID
@property (retain, nonatomic) NPKProtoHash *libraryHash; // ivar: _libraryHash
@property (retain, nonatomic) NSString *passID; // ivar: _passID
@property (nonatomic) unsigned int resyncID; // ivar: _resyncID
@property (nonatomic) unsigned int syncID; // ivar: _syncID


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
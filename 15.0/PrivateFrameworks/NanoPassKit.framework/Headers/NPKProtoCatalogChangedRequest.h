// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKPROTOCATALOGCHANGEDREQUEST_H
#define NPKPROTOCATALOGCHANGEDREQUEST_H

@class PBRequest;
@protocol NSCopying;


#import "NPKProtoCatalog.h"

@interface NPKProtoCatalogChangedRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NPKProtoCatalog *companionCatalog; // ivar: _companionCatalog
@property (nonatomic) BOOL hasLastKnownResyncID;
@property (nonatomic) BOOL hasResyncID;
@property (nonatomic) BOOL hasSyncID;
@property (readonly, nonatomic) BOOL hasWatchCatalog;
@property (nonatomic) unsigned int lastKnownResyncID; // ivar: _lastKnownResyncID
@property (nonatomic) unsigned int resyncID; // ivar: _resyncID
@property (nonatomic) unsigned int syncID; // ivar: _syncID
@property (retain, nonatomic) NPKProtoCatalog *watchCatalog; // ivar: _watchCatalog


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
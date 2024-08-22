// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKPROTONEWLIBRARYHASHREQUEST_H
#define NPKPROTONEWLIBRARYHASHREQUEST_H

@class PBRequest;
@protocol NSCopying;


#import "NPKProtoHash.h"

@interface NPKProtoNewLibraryHashRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasLastKnownResyncID;
@property (nonatomic) BOOL hasResyncID;
@property (nonatomic) BOOL hasSyncID;
@property (nonatomic) unsigned int lastKnownResyncID; // ivar: _lastKnownResyncID
@property (retain, nonatomic) NPKProtoHash *libraryHash; // ivar: _libraryHash
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
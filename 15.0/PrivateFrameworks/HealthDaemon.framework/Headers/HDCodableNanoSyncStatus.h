// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCODABLENANOSYNCSTATUS_H
#define HDCODABLENANOSYNCSTATUS_H

@class PBCodable, NSMutableArray, NSString;
@protocol HDSyncAnchorMap, HDNanoSyncDescription, HDNanoSyncPersistentUserInfoCopying, NSCopying;



@interface HDCodableNanoSyncStatus : PBCodable <HDSyncAnchorMap, HDNanoSyncDescription, HDNanoSyncPersistentUserInfoCopying, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *anchors; // ivar: _anchors
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasStatusCode;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic) int statusCode; // ivar: _statusCode
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(id)persistentUserInfoKey;
+(id)retreiveFromPersistentUserInfo:(id)arg0 ;
+(id)statusWithStatusCode:(int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSInteger)anchorForSyncEntityClass:(Class)arg0 ;
-(NSInteger)anchorForSyncEntityIdentifier:(id)arg0 ;
-(NSUInteger)anchorCount;
-(id)anchorsAtIndex:(NSUInteger)arg0 ;
-(id)copyForPersistentUserInfo;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)nanoSyncDescription;
-(id)statusCodeAsString:(int)arg0 ;
-(int)StringAsStatusCode:(id)arg0 ;
-(void)addAnchors:(id)arg0 ;
-(void)addToPersistentUserInfo:(id)arg0 ;
-(void)clearAnchors;
-(void)copyTo:(id)arg0 ;
-(void)enumerateAnchorsAndEntityIdentifiersWithBlock:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)setAnchor:(NSInteger)arg0 forSyncEntity:(Class)arg1 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
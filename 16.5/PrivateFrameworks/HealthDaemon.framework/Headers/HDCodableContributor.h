// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCODABLECONTRIBUTOR_H
#define HDCODABLECONTRIBUTOR_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface HDCodableContributor : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *appleID; // ivar: _appleID
@property (retain, nonatomic) NSString *callerID; // ivar: _callerID
@property (nonatomic) BOOL deleted; // ivar: _deleted
@property (readonly, nonatomic) BOOL hasAppleID;
@property (readonly, nonatomic) BOOL hasCallerID;
@property (nonatomic) BOOL hasDeleted;
@property (nonatomic) BOOL hasModificationDate;
@property (readonly, nonatomic) BOOL hasUuid;
@property (nonatomic) CGFloat modificationDate; // ivar: _modificationDate
@property (retain, nonatomic) NSData *uuid; // ivar: _uuid


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
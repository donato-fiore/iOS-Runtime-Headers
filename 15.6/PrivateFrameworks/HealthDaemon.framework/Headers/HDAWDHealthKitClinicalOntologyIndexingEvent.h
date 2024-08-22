// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDAWDHEALTHKITCLINICALONTOLOGYINDEXINGEVENT_H
#define HDAWDHEALTHKITCLINICALONTOLOGYINDEXINGEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface HDAWDHealthKitClinicalOntologyIndexingEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *failingAction; // ivar: _failingAction
@property (retain, nonatomic) NSString *failingKeyPath; // ivar: _failingKeyPath
@property (readonly, nonatomic) BOOL hasFailingAction;
@property (readonly, nonatomic) BOOL hasFailingKeyPath;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


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
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLTPBHANDLEACKNOWLEDGEACTIONREQUEST_H
#define BLTPBHANDLEACKNOWLEDGEACTIONREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;


#import "BLTPBActionInformation.h"

@interface BLTPBHandleAcknowledgeActionRequest : PBRequest <NSCopying>



@property (retain, nonatomic) BLTPBActionInformation *actionInfo; // ivar: _actionInfo
@property (readonly, nonatomic) BOOL hasActionInfo;
@property (readonly, nonatomic) BOOL hasPublisherBulletinID;
@property (readonly, nonatomic) BOOL hasRecordID;
@property (readonly, nonatomic) BOOL hasSectionID;
@property (retain, nonatomic) NSString *publisherBulletinID; // ivar: _publisherBulletinID
@property (retain, nonatomic) NSString *recordID; // ivar: _recordID
@property (retain, nonatomic) NSString *sectionID; // ivar: _sectionID


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
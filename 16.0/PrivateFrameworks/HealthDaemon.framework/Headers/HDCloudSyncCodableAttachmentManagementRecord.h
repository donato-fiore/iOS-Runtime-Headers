// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCLOUDSYNCCODABLEATTACHMENTMANAGEMENTRECORD_H
#define HDCLOUDSYNCCODABLEATTACHMENTMANAGEMENTRECORD_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface HDCloudSyncCodableAttachmentManagementRecord : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSString *uuid; // ivar: _uuid


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
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCLOUDSYNCCODABLEMEDICALID_H
#define HDCLOUDSYNCCODABLEMEDICALID_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "HDCodableMedicalIDData.h"

@interface HDCloudSyncCodableMedicalID : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasMedicalIDData;
@property (retain, nonatomic) HDCodableMedicalIDData *medicalIDData; // ivar: _medicalIDData
@property (retain, nonatomic) NSMutableArray *medicalIDLogs; // ivar: _medicalIDLogs


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)medicalIDLogsAtIndex:(NSUInteger)arg0 ;
-(void)addMedicalIDLogs:(id)arg0 ;
-(void)clearMedicalIDLogs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
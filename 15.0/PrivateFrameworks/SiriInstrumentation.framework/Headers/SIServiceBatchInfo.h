// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SISERVICEBATCHINFO_H
#define SISERVICEBATCHINFO_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SIServiceDeviceUploadInfo.h"
#import "SIServiceServerUploadInfo.h"

@interface SIServiceBatchInfo : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSData *batch_id; // ivar: _batch_id
@property (nonatomic) int batch_type; // ivar: _batch_type
@property (retain, nonatomic) SIServiceDeviceUploadInfo *device_upload_info; // ivar: _device_upload_info
@property (nonatomic) BOOL hasBatch_id; // ivar: _hasBatch_id
@property (nonatomic) BOOL hasBatch_type;
@property (nonatomic) BOOL hasDevice_upload_info; // ivar: _hasDevice_upload_info
@property (nonatomic) BOOL hasServer_upload_info; // ivar: _hasServer_upload_info
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SIServiceServerUploadInfo *server_upload_info; // ivar: _server_upload_info
@property (readonly, nonatomic) NSUInteger whichUpload_Info; // ivar: _whichUpload_Info


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SISERVICEDEVICEUPLOADINFO_H
#define SISERVICEDEVICEUPLOADINFO_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface SIServiceDeviceUploadInfo : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasNs_relative_to_boot;
@property (nonatomic) BOOL hasRef_id; // ivar: _hasRef_id
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) NSUInteger ns_relative_to_boot; // ivar: _ns_relative_to_boot
@property (copy, nonatomic) NSString *ref_id; // ivar: _ref_id


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteNs_relative_to_boot;
-(void)deleteRef_id;
-(void)writeTo:(id)arg0 ;


@end


#endif
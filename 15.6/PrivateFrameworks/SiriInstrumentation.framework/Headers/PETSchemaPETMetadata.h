// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PETSCHEMAPETMETADATA_H
#define PETSCHEMAPETMETADATA_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface PETSchemaPETMetadata : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSString *build; // ivar: _build
@property (nonatomic) unsigned int config_version; // ivar: _config_version
@property (copy, nonatomic) NSString *country; // ivar: _country
@property (copy, nonatomic) NSString *device; // ivar: _device
@property (nonatomic) BOOL hasBuild; // ivar: _hasBuild
@property (nonatomic) BOOL hasConfig_version;
@property (nonatomic) BOOL hasCountry; // ivar: _hasCountry
@property (nonatomic) BOOL hasDevice; // ivar: _hasDevice
@property (nonatomic) BOOL hasIs_config_enabled;
@property (nonatomic) BOOL hasIs_gm;
@property (nonatomic) BOOL hasIs_internal;
@property (nonatomic) BOOL hasIs_internal_carry;
@property (nonatomic) BOOL hasIs_seed;
@property (nonatomic) BOOL hasIs_testing_data;
@property (nonatomic) BOOL hasIs_trial_upload;
@property (nonatomic) BOOL hasLanguage; // ivar: _hasLanguage
@property (nonatomic) BOOL hasMessage_group; // ivar: _hasMessage_group
@property (nonatomic) BOOL hasMsg_type; // ivar: _hasMsg_type
@property (nonatomic) BOOL hasPlatform; // ivar: _hasPlatform
@property (nonatomic) BOOL hasPseudo_device_id; // ivar: _hasPseudo_device_id
@property (nonatomic) BOOL hasUpload_time;
@property (nonatomic) BOOL is_config_enabled; // ivar: _is_config_enabled
@property (nonatomic) BOOL is_gm; // ivar: _is_gm
@property (nonatomic) BOOL is_internal; // ivar: _is_internal
@property (nonatomic) BOOL is_internal_carry; // ivar: _is_internal_carry
@property (nonatomic) BOOL is_seed; // ivar: _is_seed
@property (nonatomic) BOOL is_testing_data; // ivar: _is_testing_data
@property (nonatomic) BOOL is_trial_upload; // ivar: _is_trial_upload
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *language; // ivar: _language
@property (copy, nonatomic) NSString *message_group; // ivar: _message_group
@property (copy, nonatomic) NSString *msg_type; // ivar: _msg_type
@property (copy, nonatomic) NSString *platform; // ivar: _platform
@property (copy, nonatomic) NSString *pseudo_device_id; // ivar: _pseudo_device_id
@property (nonatomic) NSUInteger upload_time; // ivar: _upload_time


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteBuild;
-(void)deleteConfig_version;
-(void)deleteCountry;
-(void)deleteDevice;
-(void)deleteIs_config_enabled;
-(void)deleteIs_gm;
-(void)deleteIs_internal;
-(void)deleteIs_internal_carry;
-(void)deleteIs_seed;
-(void)deleteIs_testing_data;
-(void)deleteIs_trial_upload;
-(void)deleteLanguage;
-(void)deleteMessage_group;
-(void)deleteMsg_type;
-(void)deletePlatform;
-(void)deleteUpload_time;
-(void)writeTo:(id)arg0 ;


@end


#endif
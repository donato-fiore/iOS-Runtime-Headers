// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCEDUCLASSROOMPAYLOAD_H
#define MCEDUCLASSROOMPAYLOAD_H

@class NSDictionary, CRKEDUPayload, NSArray, NSData, NSString;


#import "MCPayload.h"

@interface MCEDUClassroomPayload : MCPayload

@property (readonly, copy, nonatomic) NSDictionary *configuration;
@property (retain, nonatomic) CRKEDUPayload *crk_payload; // ivar: _crk_payload
@property (retain, nonatomic) NSArray *leaderPayloadCertificateAnchorPersistentID;
@property (retain, nonatomic) NSArray *leaderPayloadCertificateAnchorUUID;
@property (retain, nonatomic) NSArray *memberPayloadCertificateAnchorPersistentID;
@property (retain, nonatomic) NSArray *memberPayloadCertificateAnchorUUID;
@property (retain, nonatomic) NSData *payloadCertificatePersistentID;
@property (copy, nonatomic) NSString *payloadCertificateUUID;
@property (retain, nonatomic) NSData *resourcePayloadCertificatePersistentID;
@property (copy, nonatomic) NSString *resourcePayloadCertificateUUID;


+(id)localizedPluralForm;
+(id)localizedSingularForm;
+(id)typeStrings;
-(id)initWithDictionary:(id)arg0 profile:(id)arg1 outError:(*id)arg2 ;
-(id)payloadDescriptionKeyValueSections;
-(id)stubDictionary;
-(id)title;
-(id)translatedCRKError:(id)arg0 ;
-(id)verboseDescription;


@end


#endif
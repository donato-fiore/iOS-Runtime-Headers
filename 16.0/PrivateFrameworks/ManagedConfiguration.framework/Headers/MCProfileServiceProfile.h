// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCPROFILESERVICEPROFILE_H
#define MCPROFILESERVICEPROFILE_H

@class NSArray, NSString, NSData;


#import "MCProfile.h"

@interface MCProfileServiceProfile : MCProfile {
    NSArray *_bogusPayloads;
}


@property (retain, nonatomic) NSString *URLString; // ivar: _URLString
@property (readonly, retain, nonatomic) id *challenge; // ivar: _challenge
@property (readonly, nonatomic) BOOL confirmInstallation; // ivar: _confirmInstallation
@property (readonly, retain, nonatomic) NSArray *deviceAttributes; // ivar: _deviceAttributes
@property (retain, nonatomic) NSData *enrollmentIdentityPersistentID; // ivar: _enrollmentIdentityPersistentID
@property (readonly, nonatomic) BOOL supportedServerVersion; // ivar: _supportedServerVersion


-(id)_badDataTypeErrorWithFieldName:(id)arg0 ;
-(id)_unsupportedValueErrorWithFieldName:(id)arg0 value:(id)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg0 signerCerts:(id)arg1 allowEmptyPayload:(BOOL)arg2 outError:(*id)arg3 ;
-(id)localizedManagedPayloadSummaryByType;
-(id)localizedPayloadSummaryByType;
-(id)managedPayloads;
-(id)payloads;
-(id)serializedDictionary;
-(id)stubDictionary;
-(id)verboseDescription;


@end


#endif
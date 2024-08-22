// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMTCONFIGURATIONPROFILE_H
#define DMTCONFIGURATIONPROFILE_H

@class NSString, NSArray, NSDictionary;
@protocol DMTConfigurationProfilePayload;


#import "DMTConfigurationPrimitive.h"

@interface DMTConfigurationProfile : DMTConfigurationPrimitive <DMTConfigurationProfilePayload>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSArray *payloads; // ivar: _payloads
@property (readonly, nonatomic) NSDictionary *payloadsByType; // ivar: _payloadsByType
@property (readonly, nonatomic) NSDictionary *payloadsByUUID; // ivar: _payloadsByUUID
@property (readonly, nonatomic) NSDictionary *rawDictionary;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *uuid;


+(id)configurationProfileWithData:(id)arg0 error:(*id)arg1 ;
+(id)configurationProfileWithDictionary:(id)arg0 error:(*id)arg1 ;
-(BOOL)validateWithValidators:(id)arg0 error:(*id)arg1 ;
-(id)initWithDictionary:(id)arg0 error:(*id)arg1 ;
-(id)payloadsOfType:(id)arg0 ;
-(id)payloadsOfTypes:(id)arg0 ;


@end


#endif
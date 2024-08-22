// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCSINGLESIGNONPAYLOAD_H
#define MCSINGLESIGNONPAYLOAD_H

@class NSString;


#import "MCPayload.h"
#import "MCSingleSignOnPayloadKerberosInfo.h"

@interface MCSingleSignOnPayload : MCPayload

@property (retain, nonatomic) NSString *humanReadableName; // ivar: _humanReadableName
@property (retain, nonatomic) MCSingleSignOnPayloadKerberosInfo *kerberosInfo; // ivar: _kerberosInfo


+(id)localizedPluralForm;
+(id)localizedSingularForm;
+(id)typeStrings;
-(id)initWithDictionary:(id)arg0 profile:(id)arg1 outError:(*id)arg2 ;
-(id)payloadDescriptionKeyValueSections;
-(id)stubDictionary;
-(id)title;
-(id)verboseDescription;


@end


#endif
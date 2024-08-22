// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCAIRPLAYSECURITYPAYLOAD_H
#define MCAIRPLAYSECURITYPAYLOAD_H

@class NSString;


#import "MCPayload.h"

@interface MCAirPlaySecurityPayload : MCPayload

@property (retain, nonatomic) NSString *accessType; // ivar: _accessType
@property (retain, nonatomic) NSString *password; // ivar: _password
@property (retain, nonatomic) NSString *securityType; // ivar: _securityType


+(id)localizedPluralForm;
+(id)localizedSingularForm;
+(id)typeStrings;
-(id)initWithDictionary:(id)arg0 profile:(id)arg1 outError:(*id)arg2 ;
-(id)stubDictionary;
-(id)subtitle1Description;
-(id)subtitle1Label;
-(id)subtitle2Description;
-(id)subtitle2Label;
-(id)verboseDescription;


@end


#endif
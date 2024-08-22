// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCAPPWHITELISTPAYLOADBASE_H
#define MCAPPWHITELISTPAYLOADBASE_H

@class NSArray;


#import "MCPayload.h"

@interface MCAppWhitelistPayloadBase : MCPayload

@property (nonatomic) BOOL allowAccessWithoutPasscode; // ivar: _allowAccessWithoutPasscode
@property (nonatomic) BOOL forceAllowSupervisorAccess; // ivar: _forceAllowSupervisorAccess
@property (retain, nonatomic) NSArray *whitelistedAppsAndOptions; // ivar: _whitelistedAppsAndOptions


+(id)knownOptionsKeys;
+(id)knownUserEnabledOptionKeys;
-(id)initWithDictionary:(id)arg0 profile:(id)arg1 outError:(*id)arg2 ;
-(id)payloadDescriptionKeyValueSections;
-(id)restrictions;
-(id)stubDictionary;
-(id)verboseDescription;


@end


#endif
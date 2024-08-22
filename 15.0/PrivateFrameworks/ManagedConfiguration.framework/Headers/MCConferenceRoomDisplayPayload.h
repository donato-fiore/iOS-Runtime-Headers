// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCCONFERENCEROOMDISPLAYPAYLOAD_H
#define MCCONFERENCEROOMDISPLAYPAYLOAD_H

@class NSString;


#import "MCPayload.h"

@interface MCConferenceRoomDisplayPayload : MCPayload

@property (readonly, copy, nonatomic) NSString *customMessage; // ivar: _customMessage


+(id)localizedPluralForm;
+(id)localizedSingularForm;
+(id)typeStrings;
-(id)configuration;
-(id)initWithDictionary:(id)arg0 profile:(id)arg1 outError:(*id)arg2 ;
-(id)payloadDescriptionKeyValueSections;
-(id)stubDictionary;


@end


#endif
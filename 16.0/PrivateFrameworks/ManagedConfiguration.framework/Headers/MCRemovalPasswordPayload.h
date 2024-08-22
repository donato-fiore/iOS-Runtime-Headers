// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCREMOVALPASSWORDPAYLOAD_H
#define MCREMOVALPASSWORDPAYLOAD_H

@class NSString;


#import "MCPayload.h"

@interface MCRemovalPasswordPayload : MCPayload

@property (retain, nonatomic) NSString *removalPasscode; // ivar: _removalPasscode


+(id)localizedPluralForm;
+(id)localizedSingularForm;
+(id)typeStrings;
-(id)initWithDictionary:(id)arg0 profile:(id)arg1 outError:(*id)arg2 ;
-(id)stubDictionary;


@end


#endif
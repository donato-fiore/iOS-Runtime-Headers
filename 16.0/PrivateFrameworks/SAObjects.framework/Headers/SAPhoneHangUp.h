// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAPHONEHANGUP_H
#define SAPHONEHANGUP_H



#import "SABaseClientBoundCommand.h"

@interface SAPhoneHangUp : SABaseClientBoundCommand



+(id)hangUp;
+(id)hangUpWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif
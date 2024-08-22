// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAPHONEINCOMINGCALLSEARCH_H
#define SAPHONEINCOMINGCALLSEARCH_H



#import "SABaseClientBoundCommand.h"

@interface SAPhoneIncomingCallSearch : SABaseClientBoundCommand



+(id)incomingCallSearch;
+(id)incomingCallSearchWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif
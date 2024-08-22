// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASCREENACTIONSHOWHOMESCREEN_H
#define SASCREENACTIONSHOWHOMESCREEN_H



#import "SABaseClientBoundCommand.h"

@interface SAScreenActionShowHomeScreen : SABaseClientBoundCommand



+(id)showHomeScreen;
+(id)showHomeScreenWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif
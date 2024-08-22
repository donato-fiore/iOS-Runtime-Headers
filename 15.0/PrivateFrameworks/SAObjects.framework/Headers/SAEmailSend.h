// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAEMAILSEND_H
#define SAEMAILSEND_H



#import "SADomainCommand.h"
#import "SAEmailEmail.h"

@interface SAEmailSend : SADomainCommand

@property (retain, nonatomic) SAEmailEmail *email;


+(id)send;
+(id)sendWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif
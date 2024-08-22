// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAPHONEANSWER_H
#define SAPHONEANSWER_H



#import "SABaseClientBoundCommand.h"

@interface SAPhoneAnswer : SABaseClientBoundCommand

@property (nonatomic) BOOL videoAllowed;


+(id)answer;
+(id)answerWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif
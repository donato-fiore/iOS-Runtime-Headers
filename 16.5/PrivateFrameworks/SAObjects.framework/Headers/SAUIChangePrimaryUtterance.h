// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAUICHANGEPRIMARYUTTERANCE_H
#define SAUICHANGEPRIMARYUTTERANCE_H

@class NSString;


#import "SABaseClientBoundCommand.h"

@interface SAUIChangePrimaryUtterance : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *speechRecognitionId;
@property (nonatomic) NSInteger utteranceIndex;


+(id)changePrimaryUtterance;
+(id)changePrimaryUtteranceWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif
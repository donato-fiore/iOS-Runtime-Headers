// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAUISHOWHELP_H
#define SAUISHOWHELP_H

@class NSString;


#import "SABaseClientBoundCommand.h"

@interface SAUIShowHelp : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *speakableText;
@property (copy, nonatomic) NSString *text;


+(id)showHelp;
+(id)showHelpWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif
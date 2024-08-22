// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAUICLEARSCREEN_H
#define SAUICLEARSCREEN_H



#import "SABaseClientBoundCommand.h"
#import "SAAceView.h"

@interface SAUIClearScreen : SABaseClientBoundCommand

@property (retain, nonatomic) SAAceView *initialView;


+(id)clearScreen;
+(id)clearScreenWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif
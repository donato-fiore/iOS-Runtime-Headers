// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAUITAKESCREENSHOT_H
#define SAUITAKESCREENSHOT_H



#import "SABaseClientBoundCommand.h"

@interface SAUITakeScreenshot : SABaseClientBoundCommand

@property (nonatomic) BOOL shouldHideSiri;


-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif
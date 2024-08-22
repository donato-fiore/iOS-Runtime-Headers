// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TMLNSOBJECTACCESSIBILITY_H
#define TMLNSOBJECTACCESSIBILITY_H


#import <Foundation/Foundation.h>


@interface TMLNSObjectAccessibility : NSObject



+(void)makeAccessible:(id)arg0 signalName:(id)arg1 ;
-(void)accessibilityElementDidBecomeFocused;
-(void)accessibilityElementDidLoseFocus;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKAPIREPORTER_H
#define GKAPIREPORTER_H


#import <Foundation/Foundation.h>


@interface GKAPIReporter : NSObject



+(id)reporter;
-(void)recordVoiceChat;
-(void)sendMetrics:(id)arg0 ;


@end


#endif
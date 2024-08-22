// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RMSCONTROLSESSION_H
#define RMSCONTROLSESSION_H


#import <Foundation/Foundation.h>


@interface RMSControlSession : NSObject



+(id)daapControlSession;
+(id)localControlSession;
+(id)proxyControlSession;


@end


#endif
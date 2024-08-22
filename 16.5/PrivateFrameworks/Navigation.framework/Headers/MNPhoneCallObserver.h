// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MNPHONECALLOBSERVER_H
#define MNPHONECALLOBSERVER_H


#import <Foundation/Foundation.h>


@interface MNPhoneCallObserver : NSObject



+(id)sharedPhoneCallObserver;
-(BOOL)hasActiveCalls;


@end


#endif
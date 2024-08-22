// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQDELAYEDOFFERFAILSAFEACTIVITYCONTROLLER_H
#define ICQDELAYEDOFFERFAILSAFEACTIVITYCONTROLLER_H


#import <Foundation/Foundation.h>


@interface ICQDelayedOfferFailsafeActivityController : NSObject



// +(void)_runWithDaemon:(id)arg0 errorCallback:(unk)arg1  ;
+(void)startActivityWithDelaySecs:(NSInteger)arg0 completion:(id)arg1 ;
+(void)stopActivityWithCompletion:(id)arg0 ;


@end


#endif
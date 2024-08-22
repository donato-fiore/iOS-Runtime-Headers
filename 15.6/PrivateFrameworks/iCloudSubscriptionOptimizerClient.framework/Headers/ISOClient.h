// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ISOCLIENT_H
#define ISOCLIENT_H


#import <Foundation/Foundation.h>


@interface ISOClient : NSObject



+(id)shared;
-(void)isNotificationPending:(id)arg0 withCallback:(id)arg1 ;
-(void)onNewOffer:(id)arg0 withCallback:(id)arg1 ;


@end


#endif
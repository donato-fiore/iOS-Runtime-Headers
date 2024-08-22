// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CARDNDUTILITY_H
#define CARDNDUTILITY_H


#import <Foundation/Foundation.h>

#import "CARAutomaticDNDStatus.h"

@interface CARDNDUtility : NSObject

@property (retain, nonatomic) CARAutomaticDNDStatus *DNDStatus; // ivar: _DNDStatus


+(id)sharedInstance;
-(id)init;
-(id)outputFromRhodesUtility;


@end


#endif
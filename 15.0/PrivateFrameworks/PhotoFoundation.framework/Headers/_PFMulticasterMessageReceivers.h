// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PFMULTICASTERMESSAGERECEIVERS_H
#define _PFMULTICASTERMESSAGERECEIVERS_H

@protocol PFMulticasterDistributionList;

#import <Foundation/Foundation.h>

#import "_PFMulticasterReceiverList.h"

@interface _PFMulticasterMessageReceivers : NSObject <PFMulticasterDistributionList>

 {
    _PFMulticasterReceiverList *_strongReceivers;
    _PFMulticasterReceiverList *_weakReceivers;
}




-(NSUInteger)count;
-(id)initWithStrongReceivers:(id)arg0 weakReceivers:(id)arg1 ;
-(void)enumerateReceiversWithBlock:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRITASKSUPPORT_H
#define TRITASKSUPPORT_H

@protocol TRITaskSetProviding;

#import <Foundation/Foundation.h>


@interface TRITaskSupport : NSObject <TRITaskSetProviding>





+(id)sharedInstance;
-(Class)taskClassForTaskType:(int)arg0 ;
-(id)XPCTaskWhitelist;


@end


#endif
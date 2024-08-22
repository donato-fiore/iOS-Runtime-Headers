// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SISIGNALSTORE_H
#define SISIGNALSTORE_H


#import <Foundation/Foundation.h>


@interface SISignalStore : NSObject {
    ? store;
    ? intentGroupIdentifier;
}




-(BOOL)logWithData:(id)arg0 signalType:(id)arg1 intentId:(id)arg2 timestamp:(id)arg3 error:(*id)arg4 ;
-(id)init;


@end


#endif
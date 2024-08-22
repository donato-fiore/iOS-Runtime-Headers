// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STFIBPPROVIDER_H
#define STFIBPPROVIDER_H


#import <Foundation/Foundation.h>


@interface STFIBPProvider : NSObject



+(id)STFStillIBPForVersion:(unsigned int)arg0 ;
+(id)STFVideoProcessorForVersion:(unsigned int)arg0 ringBufferSize:(unsigned int)arg1 historySize:(unsigned int)arg2 cmdQueue:(id)arg3 ;


@end


#endif
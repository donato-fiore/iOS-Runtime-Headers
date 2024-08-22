// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFTIMEINTERVALCOALESCER_H
#define PFTIMEINTERVALCOALESCER_H


#import <Foundation/Foundation.h>


@interface PFTimeIntervalCoalescer : NSObject {
    uint8_t _sequenceNumber;
    NSInteger _fireSequenceNumber;
}




-(void)dispatch_after:(NSUInteger)arg0 queue:(id)arg1 block:(id)arg2 ;


@end


#endif
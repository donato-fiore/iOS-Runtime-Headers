// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BPSDIRECTASSOCATIONCORRELATEHANDLER_H
#define BPSDIRECTASSOCATIONCORRELATEHANDLER_H



#import "BPSCorrelateHandler.h"

@interface BPSDirectAssocationCorrelateHandler : BPSCorrelateHandler {
    id *_correlating;
}




-(id)correlateWithCurrentEvent:(id)arg0 ;
-(id)initWithCorrelating:(id)arg0 ;
-(void)receiveCurrentEvent:(id)arg0 ;
-(void)receivePriorEvent:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _BPSCORRELATEINNER_H
#define _BPSCORRELATEINNER_H



#import "BPSCorrelationProducer.h"
#import "BPSCorrelateHandler.h"

@interface _BPSCorrelateInner : BPSCorrelationProducer

@property (readonly, nonatomic) BPSCorrelateHandler *correlateHandler; // ivar: _correlateHandler


-(id)initWithDownstream:(id)arg0 correlateHandler:(id)arg1 ;
-(id)newBookmark;
-(id)receiveNewValue:(id)arg0 source:(NSInteger)arg1 ;


@end


#endif
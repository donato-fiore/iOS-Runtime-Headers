// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _BPSFILTERINNER_H
#define _BPSFILTERINNER_H



#import "BPSFilterProducer.h"

@interface _BPSFilterInner : BPSFilterProducer

@property (readonly, nonatomic) id *isIncluded; // ivar: _isIncluded


-(id)initWithDownstream:(id)arg0 isIncluded:(id)arg1 ;
-(id)receiveNewValue:(id)arg0 ;


@end


#endif
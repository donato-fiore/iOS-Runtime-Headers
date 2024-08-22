// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _BPSREMOVEDUPLICATESINNER_H
#define _BPSREMOVEDUPLICATESINNER_H



#import "BPSFilterProducer.h"

@interface _BPSRemoveDuplicatesInner : BPSFilterProducer

@property (readonly, nonatomic) id *isDuplicate; // ivar: _isDuplicate
@property (retain, nonatomic) id *last; // ivar: _last


-(id)initWithDownstream:(id)arg0 isDuplicate:(id)arg1 ;
-(id)receiveNewValue:(id)arg0 ;


@end


#endif
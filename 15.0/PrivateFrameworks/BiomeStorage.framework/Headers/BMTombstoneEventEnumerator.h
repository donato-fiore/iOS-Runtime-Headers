// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMTOMBSTONEEVENTENUMERATOR_H
#define BMTOMBSTONEEVENTENUMERATOR_H



#import "BMStoreEnumeratorBase.h"

@interface BMTombstoneEventEnumerator : BMStoreEnumeratorBase



-(id)_eventWithFrameStore:(id)arg0 frame:(id)arg1 error:(unsigned char)arg2 ;
-(id)_originaleventWithFrameStore:(id)arg0 frame:(id)arg1 error:(unsigned char)arg2 ;
-(id)nextEvent;
-(id)nextTombstoneEvent;
-(id)peekEvent;
-(id)peekTombstoneEvent;


@end


#endif
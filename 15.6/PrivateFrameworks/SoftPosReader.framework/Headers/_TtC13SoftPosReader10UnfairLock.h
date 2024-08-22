// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC13SOFTPOSREADER10UNFAIRLOCK_H
#define _TTC13SOFTPOSREADER10UNFAIRLOCK_H

@class SwiftObject;
@protocol NSLocking;



@interface _TtC13SoftPosReader10UnfairLock : SwiftObject <NSLocking>

 {
    ? unfairlock;
}




-(void)lock;
-(void)unlock;


@end


#endif
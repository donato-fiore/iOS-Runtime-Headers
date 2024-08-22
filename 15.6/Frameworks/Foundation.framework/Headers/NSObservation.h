// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSOBSERVATION_H
#define NSOBSERVATION_H


#import <Foundation/Foundation.h>


@interface NSObservation : NSObject



+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(*id)_observerStorage;
-(*void)_observerStorageOfSize:(NSUInteger)arg0 ;
// -(id)initWithObservable:(id)arg0 blockSink:(id)arg1 tag:(unk)arg2  ;
-(id)initWithObservable:(id)arg0 observer:(id)arg1 ;
-(void)remove;


@end


#endif
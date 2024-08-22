// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSCONCRETEBLOCKSINKOBSERVATION_H
#define _NSCONCRETEBLOCKSINKOBSERVATION_H

@protocol NSObservable;


#import "NSObservation.h"

@interface _NSConcreteBlockSinkObservation : NSObservation {
    NSObject<NSObservable> *_LHSobservable;
    id *_block;
    int _tag;
}




-(*id)_observerStorage;
-(*void)_observerStorageOfSize:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)debugDescription;
// -(id)initWithObservable:(id)arg0 blockSink:(id)arg1 tag:(unk)arg2  ;
-(void)_receiveBox:(id)arg0 ;
-(void)dealloc;
-(void)finishObserving;
-(void)remove;


@end


#endif
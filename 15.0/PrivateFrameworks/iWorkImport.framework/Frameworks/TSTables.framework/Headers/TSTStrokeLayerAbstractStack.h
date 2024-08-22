// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTSTROKELAYERABSTRACTSTACK_H
#define TSTSTROKELAYERABSTRACTSTACK_H


#import <Foundation/Foundation.h>


@interface TSTStrokeLayerAbstractStack : NSObject {
    _opaque_pthread_rwlock_t mRWLock;
}




-(NSUInteger)count;
-(id)init;
-(id)lookupStrokeAtIndex:(NSInteger)arg0 ;
-(id)mutableStrokeLayerWithContext:(id)arg0 subtractingDefaultsFrom:(id)arg1 forRange:(struct TSTSimpleRange )arg2 ;
-(id)p_strokeLayerEnumeration;
-(id)portalledStrokeLayer;
-(void)dealloc;
-(void)enumerateStrokesAndCapsFrom:(unsigned int)arg0 to:(unsigned int)arg1 usingBlock:(id)arg2 ;
-(void)enumerateStrokesAndCapsInRange:(struct TSTSimpleRange )arg0 usingBlock:(id)arg1 ;
-(void)enumerateStrokesFrom:(unsigned int)arg0 to:(unsigned int)arg1 usingBlock:(id)arg2 ;
-(void)enumerateStrokesInRange:(struct TSTSimpleRange )arg0 usingBlock:(id)arg1 ;
-(void)lockForRead;
-(void)lockForWrite;
-(void)unlock;


@end


#endif
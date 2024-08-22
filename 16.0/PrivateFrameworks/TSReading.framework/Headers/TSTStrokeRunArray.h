// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTSTROKERUNARRAY_H
#define TSTSTROKERUNARRAY_H


#import <Foundation/Foundation.h>


@interface TSTStrokeRunArray : NSObject {
    BOOL mHasCustomStrokes;
    unsigned int mCount;
    unsigned int mAllocCount;
    unsigned int mLastLookup;
    *TSTStrokeRun mStrokes;
    _opaque_pthread_rwlock_t mRWLock;
}


@property (readonly, nonatomic) CGFloat maxWidth; // ivar: mMaxWidth


-(id)description;
-(id)initWithCount:(unsigned int)arg0 ;
-(void)dealloc;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCARRAYSTORE_H
#define PXCARRAYSTORE_H


#import <Foundation/Foundation.h>


@interface PXCArrayStore : NSObject {
    NSUInteger _elementSize;
    *void _sharedArray;
    NSUInteger _sharedArrayCapacity;
    BOOL _isSharedArrayInUse;
}




-(*void)_sharedArrayWithElementsCount:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithElementSize:(NSUInteger)arg0 ;
-(void)accessArrayWithElementsCount:(NSUInteger)arg0 accessBlock:(id)arg1 ;
-(void)dealloc;


@end


#endif
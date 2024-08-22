// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXGINDEXSETARRAY_H
#define PXGINDEXSETARRAY_H


#import <Foundation/Foundation.h>


@interface PXGIndexSetArray : NSObject {
    NSInteger _capacity;
}


@property (nonatomic) NSInteger count; // ivar: _count
@property (readonly, nonatomic) **void indexSetReferences; // ivar: _indexSetReferences


-(id)description;
-(void)dealloc;
-(void)removeAllIndexes;


@end


#endif
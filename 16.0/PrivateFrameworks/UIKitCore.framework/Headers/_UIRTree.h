// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIRTREE_H
#define _UIRTREE_H

@class NSMutableIndexSet;

#import <Foundation/Foundation.h>


@interface _UIRTree : NSObject {
    shared_ptr<_UIRTreeContainerNode> _root;
    _NSRange _allIndexesRange;
    NSMutableIndexSet *_allIndexes;
}




-(id)description;
-(id)init;
-(struct CGRect )_frameForIndex:(NSInteger)arg0 ;


@end


#endif
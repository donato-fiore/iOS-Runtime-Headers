// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EFORDEREDCOLLECTIONGROUPEDINSERTIONBYOBJECT_H
#define EFORDEREDCOLLECTIONGROUPEDINSERTIONBYOBJECT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface EFOrderedCollectionGroupedInsertionByObject : NSObject

@property (readonly, nonatomic) BOOL isMove; // ivar: _isMove
@property (readonly, nonatomic) id *nextObject; // ivar: _nextObject
@property (readonly, copy, nonatomic) NSArray *objects; // ivar: _objects
@property (readonly, nonatomic) id *previousObject; // ivar: _previousObject


-(id)initWithObjects:(id)arg0 previousObject:(id)arg1 nextObject:(id)arg2 isMove:(BOOL)arg3 ;


@end


#endif
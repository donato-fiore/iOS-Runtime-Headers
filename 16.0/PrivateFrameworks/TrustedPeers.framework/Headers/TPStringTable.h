// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSTRINGTABLE_H
#define TPSTRINGTABLE_H

@class NSHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TPStringTable : NSObject

@property (readonly) NSUInteger _count;
@property (retain) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain) NSHashTable *table; // ivar: _table


+(id)defaultTable;
-(id)initWithIdentifier:(id)arg0 ;
-(id)setWithArray:(id)arg0 ;
-(id)stringWithString:(id)arg0 ;


@end


#endif
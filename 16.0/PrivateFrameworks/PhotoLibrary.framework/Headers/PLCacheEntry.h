// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLCACHEENTRY_H
#define PLCACHEENTRY_H


#import <Foundation/Foundation.h>


@interface PLCacheEntry : NSObject {
    id *_object;
    *lruEntry _entry;
}




-(id)object;
-(struct lruEntry *)lruListEntry;
-(void)dealloc;
-(void)setObject:(id)arg0 ;


@end


#endif
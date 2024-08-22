// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef XRRECENTARRAY_H
#define XRRECENTARRAY_H

@class NSMutableArray;
@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface XRRecentArray : NSObject {
    NSMutableArray *_entries;
    NSUInteger _maximumRecentCount;
    NSObject<OS_dispatch_semaphore> *_lock;
}


@property (nonatomic) NSUInteger maximumRecentCount;


-(BOOL)containsEntry:(id)arg0 ;
-(id)entries;
-(id)entryAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithMaximumRecentCount:(NSUInteger)arg0 ;
-(void)addEntry:(id)arg0 ;
-(void)removeEntry:(id)arg0 ;
-(void)removeEntryAtIndex:(NSUInteger)arg0 ;


@end


#endif
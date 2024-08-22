// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFSEARCHRESPONSEQUEUE_H
#define MFSEARCHRESPONSEQUEUE_H

@class NSIndexSet;


#import "MFBaseSyncResponseQueue.h"

@interface MFSearchResponseQueue : MFBaseSyncResponseQueue {
    unsigned int limit;
}


@property (readonly, retain, nonatomic) NSIndexSet *indexSet; // ivar: indexSet


-(BOOL)addItem:(id)arg0 ;
-(BOOL)flush;
-(NSUInteger)flagsForItem:(id)arg0 ;
-(NSUInteger)uidForItem:(id)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXSCREENREPRESENTATION_H
#define ATXSCREENREPRESENTATION_H

@class NSMutableOrderedSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ATXScreenRepresentation : NSObject {
    NSMutableOrderedSet *_scr;
    NSObject<OS_dispatch_queue> *_queue;
}




-(NSUInteger)findPosition:(id)arg0 ;
-(id)getAllObjects;
-(id)init;
-(void)addObject:(id)arg0 ;
-(void)removeObject:(id)arg0 ;


@end


#endif
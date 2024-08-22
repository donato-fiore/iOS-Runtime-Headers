// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHAJOBWORKINFOREADER_H
#define PHAJOBWORKINFOREADER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface PHAJobWorkInfoReader : NSObject {
    NSMutableArray *_workInfosQueue;
}


@property (nonatomic) NSUInteger fetchLimit; // ivar: _fetchLimit
@property (readonly, nonatomic) NSUInteger queueCount;


-(id)init;
-(id)workInfoWithCount:(NSUInteger)arg0 fetchBlock:(id)arg1 ;


@end


#endif
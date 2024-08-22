// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXCACHEDCANDIDATECOUNTER_H
#define ATXCACHEDCANDIDATECOUNTER_H

@class BPSPublisher, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ATXCachedCandidateCounter : NSObject {
    BPSPublisher *_publisher;
    NSMutableDictionary *_cache;
}




-(NSInteger)countForCandidate:(id)arg0 ;
-(id)init;
-(id)initWithCandidateIdPublisher:(id)arg0 ;
-(void)populateCache;


@end


#endif
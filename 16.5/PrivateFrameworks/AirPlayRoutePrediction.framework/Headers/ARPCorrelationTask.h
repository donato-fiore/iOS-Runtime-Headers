// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARPCORRELATIONTASK_H
#define ARPCORRELATIONTASK_H

@class NSString;
@protocol _DKKnowledgeQuerying;

#import <Foundation/Foundation.h>


@interface ARPCorrelationTask : NSObject

@property (readonly, copy, nonatomic) NSString *file; // ivar: _file
@property (readonly, nonatomic) NSObject<_DKKnowledgeQuerying> *knowledgeStore; // ivar: _knowledgeStore


-(id)initWithCorrelationsFile:(id)arg0 knowledgeStore:(id)arg1 ;
-(id)longFormVideoAppBundleIDs;
-(id)queryForMicroLocationsFromStartTime:(id)arg0 endTime:(id)arg1 maxEvents:(NSUInteger)arg2 overlappingNowPlayingEvents:(id)arg3 ;
-(void)execute;
-(void)execute:(id)arg0 microLocationEvents:(id)arg1 ;


@end


#endif
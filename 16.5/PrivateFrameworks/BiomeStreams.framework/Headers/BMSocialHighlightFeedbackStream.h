// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMSOCIALHIGHLIGHTFEEDBACKSTREAM_H
#define BMSOCIALHIGHLIGHTFEEDBACKSTREAM_H

@class NSString;
@protocol BMSourceStream, BMTimeBasedPublisherStream, BMSyncableStream, BMStreamDeleting;

#import <Foundation/Foundation.h>

#import "BMRestrictedStream.h"

@interface BMSocialHighlightFeedbackStream : NSObject <BMSourceStream, BMTimeBasedPublisherStream, BMSyncableStream, BMStreamDeleting>

 {
    BMRestrictedStream *_stream;
}


@property (readonly, nonatomic) NSString *identifier;


+(id)new;
-(id)init;
-(id)initWithPruningPolicy:(id)arg0 ;
-(id)publisher;
-(id)publisherFromStartTime:(CGFloat)arg0 ;
-(id)publisherWithStartTime:(id)arg0 endTime:(id)arg1 maxEvents:(id)arg2 lastN:(id)arg3 reversed:(BOOL)arg4 ;
-(id)publisherWithStartTime:(id)arg0 endTime:(id)arg1 maxEvents:(id)arg2 reversed:(BOOL)arg3 ;
-(id)publishersForRemoteDevices:(id)arg0 startTime:(CGFloat)arg1 includeLocal:(BOOL)arg2 pipeline:(id)arg3 ;
-(id)remoteDevices;
-(id)source;
-(void)deleteEventsWithPredicate:(id)arg0 ;
-(void)deleteLocalAndRemoteEventsWithPredicateBlock:(id)arg0 ;
-(void)deleteLocalAndRemoteEventsWithReason:(NSUInteger)arg0 usingPredicateBlock:(id)arg1 ;


@end


#endif
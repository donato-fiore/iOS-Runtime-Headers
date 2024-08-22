// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMSIRIPRIVATELEARNINGSELFEVENTSTREAM_H
#define BMSIRIPRIVATELEARNINGSELFEVENTSTREAM_H

@class NSString;
@protocol BMSourceStream, BMTimeBasedPublisherStream, BMStreamDeleting;

#import <Foundation/Foundation.h>

#import "BMRestrictedStream.h"

@interface BMSiriPrivateLearningSELFEventStream : NSObject <BMSourceStream, BMTimeBasedPublisherStream, BMStreamDeleting>

 {
    BMRestrictedStream *_stream;
}


@property (readonly, nonatomic) NSString *identifier;


-(id)init;
-(id)publisher;
-(id)publisherFromStartTime:(CGFloat)arg0 ;
-(id)publisherWithStartTime:(id)arg0 endTime:(id)arg1 maxEvents:(id)arg2 lastN:(id)arg3 reversed:(BOOL)arg4 ;
-(id)publisherWithStartTime:(id)arg0 endTime:(id)arg1 maxEvents:(id)arg2 reversed:(BOOL)arg3 ;
-(id)source;
-(void)deleteEventsWithPredicate:(id)arg0 ;
-(void)deleteLocalAndRemoteEventsWithPredicateBlock:(id)arg0 ;
-(void)deleteLocalAndRemoteEventsWithReason:(NSUInteger)arg0 usingPredicateBlock:(id)arg1 ;


@end


#endif
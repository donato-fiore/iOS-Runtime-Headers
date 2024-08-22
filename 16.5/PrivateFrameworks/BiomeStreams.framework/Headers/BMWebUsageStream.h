// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMWEBUSAGESTREAM_H
#define BMWEBUSAGESTREAM_H

@class NSString;
@protocol BMSourceStream, BMStreamDeleting, BMTimeBasedPublisherStream;

#import <Foundation/Foundation.h>

#import "BMStoreStream.h"

@interface BMWebUsageStream : NSObject <BMSourceStream, BMStreamDeleting, BMTimeBasedPublisherStream>

 {
    BMStoreStream *_storeStream;
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
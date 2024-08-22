// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMDKEVENTSTREAM_H
#define BMDKEVENTSTREAM_H

@class NSString;
@protocol BMSourceStream, BMTimeBasedPublisherStream, BMStreamDeleting;

#import <Foundation/Foundation.h>

#import "BMStoreStream.h"

@interface BMDKEventStream : NSObject <BMSourceStream, BMTimeBasedPublisherStream, BMStreamDeleting>

 {
    BMStoreStream *_storeStream;
    NSString *_identifier;
}


@property (readonly, nonatomic) NSString *identifier;


+(id)streamNameFromDKStreamName:(id)arg0 ;
-(BOOL)pruneEventsWithError:(*id)arg0 predicateBlock:(id)arg1 ;
-(id)init;
-(id)initWithDKStreamIdentifier:(id)arg0 contentProtection:(id)arg1 ;
-(id)initWithStreamIdentifier:(id)arg0 contentProtection:(id)arg1 ;
-(id)publisher;
-(id)publisherFromStartTime:(CGFloat)arg0 ;
-(id)publisherWithStartTime:(id)arg0 endTime:(id)arg1 maxEvents:(id)arg2 lastN:(id)arg3 reversed:(BOOL)arg4 ;
-(id)publisherWithStartTime:(id)arg0 endTime:(id)arg1 maxEvents:(id)arg2 reversed:(BOOL)arg3 ;
-(id)source;
-(void)deleteEventsWithPredicate:(id)arg0 ;
-(void)deleteLocalAndRemoteEventsWithPredicateBlock:(id)arg0 ;
-(void)deleteLocalAndRemoteEventsWithReason:(NSUInteger)arg0 usingPredicateBlock:(id)arg1 ;
-(void)pruneWithPredicateBlock:(id)arg0 ;


@end


#endif
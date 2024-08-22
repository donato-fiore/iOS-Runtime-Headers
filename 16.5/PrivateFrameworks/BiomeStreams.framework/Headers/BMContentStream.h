// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMCONTENTSTREAM_H
#define BMCONTENTSTREAM_H

@class NSString;
@protocol BMSourceStream, BMTimeBasedPublisherStream;

#import <Foundation/Foundation.h>

#import "BMStoreStream.h"
#import "BMContentSource.h"

@interface BMContentStream : NSObject <BMSourceStream, BMTimeBasedPublisherStream>

 {
    BMStoreStream *_storeStream;
    BMContentSource *_contentSource;
}


@property (readonly, nonatomic) NSString *identifier;


-(BOOL)pruneEventsWithError:(*id)arg0 predicateBlock:(id)arg1 ;
-(id)init;
-(id)initWithStreamIdentifier:(id)arg0 ;
-(id)publisher;
-(id)publisherFromStartTime:(CGFloat)arg0 ;
-(id)publisherWithStartTime:(id)arg0 endTime:(id)arg1 maxEvents:(id)arg2 lastN:(id)arg3 reversed:(BOOL)arg4 ;
-(id)publisherWithStartTime:(id)arg0 endTime:(id)arg1 maxEvents:(id)arg2 reversed:(BOOL)arg3 ;
-(id)source;
-(void)pruneWithPredicateBlock:(id)arg0 ;


@end


#endif
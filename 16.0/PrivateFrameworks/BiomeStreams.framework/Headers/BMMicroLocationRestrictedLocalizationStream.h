// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMMICROLOCATIONRESTRICTEDLOCALIZATIONSTREAM_H
#define BMMICROLOCATIONRESTRICTEDLOCALIZATIONSTREAM_H

@class NSString;
@protocol BMSourceStream, BMTimeBasedPublisherStream;

#import <Foundation/Foundation.h>

#import "BMRestrictedStream.h"

@interface BMMicroLocationRestrictedLocalizationStream : NSObject <BMSourceStream, BMTimeBasedPublisherStream>

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


@end


#endif
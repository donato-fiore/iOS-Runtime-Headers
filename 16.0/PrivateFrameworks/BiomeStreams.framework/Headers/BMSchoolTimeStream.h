// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMSCHOOLTIMESTREAM_H
#define BMSCHOOLTIMESTREAM_H

@class NSString;
@protocol BMSourceStream, BMTimeBasedPublisherStream;

#import <Foundation/Foundation.h>

#import "BMStoreStream.h"

@interface BMSchoolTimeStream : NSObject <BMSourceStream, BMTimeBasedPublisherStream>

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


@end


#endif
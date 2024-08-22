// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PIFEATUREFEEDBACKSTREAM_H
#define PIFEATUREFEEDBACKSTREAM_H

@class BMStoreStream, NSString;
@protocol BMSourceStream, BMTimeBasedPublisherStream;

#import <Foundation/Foundation.h>


@interface PIFeatureFeedbackStream : NSObject <BMSourceStream, BMTimeBasedPublisherStream>

 {
    BMStoreStream *_storeStream;
}


@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *streamIdentifier; // ivar: _streamIdentifier


+(id)clientIdentifierForClientPath:(id)arg0 ;
+(id)rootPath;
-(id)init;
-(id)initWithClientIdentifier:(id)arg0 ;
-(id)publisher;
-(id)publisherFromStartTime:(CGFloat)arg0 ;
-(id)source;


@end


#endif
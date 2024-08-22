// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXBIOMEERMSTREAM_H
#define ATXBIOMEERMSTREAM_H

@class BMStoreStream, NSString;
@protocol BMStream, BMSourceStream;

#import <Foundation/Foundation.h>


@interface ATXBiomeERMStream : NSObject <BMStream, BMSourceStream>

 {
    BMStoreStream *_inner;
}


@property (readonly, nonatomic) NSString *identifier;


-(id)init;
-(id)initWithStoreConfig:(id)arg0 ;
-(id)publisherFromStartTime:(CGFloat)arg0 ;
-(id)source;


@end


#endif
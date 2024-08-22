// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXBIOMESUGGESTEDHOMEPAGESTREAM_H
#define ATXBIOMESUGGESTEDHOMEPAGESTREAM_H

@class NSString, BMStoreStream;
@protocol BMStream, BMSourceStream;

#import <Foundation/Foundation.h>


@interface ATXBiomeSuggestedHomePageStream : NSObject <BMStream, BMSourceStream>



@property (readonly, nonatomic) NSString *identifier;
@property (retain, nonatomic) BMStoreStream *inner; // ivar: _inner


-(id)init;
-(id)initWithStoreConfig:(id)arg0 ;
-(id)publisherFromStartTime:(CGFloat)arg0 ;
-(id)source;
-(void)sendEvent:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXMISSEDNOTIFICATIONRANKINGBIOMESTREAM_H
#define ATXMISSEDNOTIFICATIONRANKINGBIOMESTREAM_H

@class BMStoreStream, BMSource, NSString;
@protocol BMStream, BMSourceStream;

#import <Foundation/Foundation.h>


@interface ATXMissedNotificationRankingBiomeStream : NSObject <BMStream, BMSourceStream>

 {
    BMStoreStream *_inner;
    BMSource *_source;
}


@property (readonly, nonatomic) NSString *identifier;


-(id)init;
-(id)initWithStoreConfig:(id)arg0 ;
-(id)publisherFromStartTime:(CGFloat)arg0 ;
-(id)source;
-(void)sendEvent:(id)arg0 ;


@end


#endif
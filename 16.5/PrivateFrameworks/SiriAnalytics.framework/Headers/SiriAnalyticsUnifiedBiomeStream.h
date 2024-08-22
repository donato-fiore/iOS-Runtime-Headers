// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRIANALYTICSUNIFIEDBIOMESTREAM_H
#define SIRIANALYTICSUNIFIEDBIOMESTREAM_H

@class BMStoreStream, BMSource, NSURL;

#import <Foundation/Foundation.h>

#import "SiriAnalyticsPreferences.h"

@interface SiriAnalyticsUnifiedBiomeStream : NSObject {
    BMStoreStream *_stream;
    BMSource *_source;
    SiriAnalyticsPreferences *_prefs;
    NSURL *_url;
}




-(id)init;
-(id)initWithStorageURL:(id)arg0 prefs:(id)arg1 ;
-(void)fetchMessagesBatchSinceBookmark:(id)arg0 batchSize:(NSUInteger)arg1 completion:(id)arg2 ;
// -(void)fetchMessagesSince:(CGFloat)arg0 receiveMessage:(id)arg1 completion:(unk)arg2  ;
// -(void)fetchMessagesSinceBookmark:(id)arg0 receiveMessage:(id)arg1 completion:(unk)arg2  ;
-(void)prune;
-(void)sendEvents:(id)arg0 ;


@end


#endif
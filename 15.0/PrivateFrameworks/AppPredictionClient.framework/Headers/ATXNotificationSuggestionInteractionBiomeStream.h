// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXNOTIFICATIONSUGGESTIONINTERACTIONBIOMESTREAM_H
#define ATXNOTIFICATIONSUGGESTIONINTERACTIONBIOMESTREAM_H

@class BMStoreStream, NSString;
@protocol BMStream, BMSourceStream;

#import <Foundation/Foundation.h>


@interface ATXNotificationSuggestionInteractionBiomeStream : NSObject <BMStream, BMSourceStream>

 {
    BMStoreStream *_inner;
}


@property (readonly, nonatomic) NSString *identifier;


-(id)init;
-(id)initWithStoreConfig:(id)arg0 ;
-(id)publisherFromStartTime:(CGFloat)arg0 ;
-(id)source;
-(void)deleteAllEvents;


@end


#endif
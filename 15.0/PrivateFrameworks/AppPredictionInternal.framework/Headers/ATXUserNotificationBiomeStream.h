// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXUSERNOTIFICATIONBIOMESTREAM_H
#define ATXUSERNOTIFICATIONBIOMESTREAM_H

@class BMStoreStream, NSString;
@protocol BMStream, BMSourceStream;

#import <Foundation/Foundation.h>


@interface ATXUserNotificationBiomeStream : NSObject <BMStream, BMSourceStream>

 {
    BMStoreStream *_inner;
}


@property (readonly, nonatomic) NSString *identifier;


-(id)init;
-(id)initWithStoreConfig:(id)arg0 ;
-(id)publisherFromStartTime:(CGFloat)arg0 ;
-(id)publisherFromStartTime:(id)arg0 endTime:(id)arg1 maxEvents:(id)arg2 lastN:(id)arg3 reversed:(BOOL)arg4 ;
-(id)source;
-(void)deleteAllEvents;
-(void)sendEvent:(NSInteger)arg0 notification:(id)arg1 deliveryReason:(NSUInteger)arg2 ;
-(void)sendEvent:(id)arg0 ;


@end


#endif
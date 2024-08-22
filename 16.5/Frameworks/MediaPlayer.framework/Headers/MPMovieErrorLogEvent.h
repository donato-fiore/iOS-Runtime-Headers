// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPMOVIEERRORLOGEVENT_H
#define MPMOVIEERRORLOGEVENT_H

@class AVPlayerItemErrorLogEvent, NSString, NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MPMovieErrorLogEvent : NSObject <NSCopying>

 {
    AVPlayerItemErrorLogEvent *_event;
}


@property (readonly, nonatomic) NSString *URI;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSString *errorComment;
@property (readonly, nonatomic) NSString *errorDomain;
@property (readonly, nonatomic) NSInteger errorStatusCode;
@property (readonly, nonatomic) NSString *playbackSessionID;
@property (readonly, nonatomic) NSString *serverAddress;


-(id)_initWithAVItemErrorLogEvent:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif
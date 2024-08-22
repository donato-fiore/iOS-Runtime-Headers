// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVPLAYERITEMERRORLOGEVENT_H
#define AVPLAYERITEMERRORLOGEVENT_H

@class NSString, NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "AVPlayerItemErrorLogEventInternal.h"

@interface AVPlayerItemErrorLogEvent : NSObject <NSCopying>

 {
    AVPlayerItemErrorLogEventInternal *_playerItemErrorLogEvent;
}


@property (readonly, nonatomic) NSString *URI;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSString *errorComment;
@property (readonly, nonatomic) NSString *errorDomain;
@property (readonly, nonatomic) NSInteger errorStatusCode;
@property (readonly, nonatomic) NSString *playbackSessionID;
@property (readonly, nonatomic) NSString *serverAddress;


-(id)_common_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(void)dealloc;


@end


#endif
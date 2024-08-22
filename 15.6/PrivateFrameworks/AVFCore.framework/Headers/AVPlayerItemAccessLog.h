// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVPLAYERITEMACCESSLOG_H
#define AVPLAYERITEMACCESSLOG_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "AVPlayerItemAccessLogInternal.h"

@interface AVPlayerItemAccessLog : NSObject <NSCopying>

 {
    AVPlayerItemAccessLogInternal *_playerItemAccessLog;
}


@property (readonly, nonatomic) NSArray *events;
@property (readonly, nonatomic) NSUInteger extendedLogDataStringEncoding;


-(id)_accessLogArray;
-(id)_common_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)extendedLogData;
-(id)init;
-(id)initWithLogArray:(id)arg0 ;
-(void)dealloc;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVPLAYERITEMERRORLOG_H
#define AVPLAYERITEMERRORLOG_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "AVPlayerItemErrorLogInternal.h"

@interface AVPlayerItemErrorLog : NSObject <NSCopying>

 {
    AVPlayerItemErrorLogInternal *_playerItemErrorLog;
}


@property (readonly, nonatomic) NSArray *events;
@property (readonly, nonatomic) NSUInteger extendedLogDataStringEncoding;


-(id)_common_init;
-(id)_errorLogArray;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)extendedLogData;
-(id)init;
-(id)initWithLogArray:(id)arg0 ;
-(void)dealloc;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMOVIEERRORLOG_H
#define MPMOVIEERRORLOG_H

@class AVPlayerItemErrorLog, NSArray, NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MPMovieErrorLog : NSObject <NSCopying>

 {
    AVPlayerItemErrorLog *_errorLog;
}


@property (readonly, nonatomic) NSArray *events;
@property (readonly, nonatomic) NSData *extendedLogData;
@property (readonly, nonatomic) NSUInteger extendedLogDataStringEncoding;


-(id)_initWithAVItemErrorLog:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif
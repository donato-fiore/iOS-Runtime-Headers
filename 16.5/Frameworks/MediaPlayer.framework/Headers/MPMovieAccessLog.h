// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPMOVIEACCESSLOG_H
#define MPMOVIEACCESSLOG_H

@class AVPlayerItemAccessLog, NSArray, NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MPMovieAccessLog : NSObject <NSCopying>

 {
    AVPlayerItemAccessLog *_accessLog;
}


@property (readonly, nonatomic) NSArray *events;
@property (readonly, nonatomic) NSData *extendedLogData;
@property (readonly, nonatomic) NSUInteger extendedLogDataStringEncoding;


-(id)_initWithAVItemAccessLog:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif
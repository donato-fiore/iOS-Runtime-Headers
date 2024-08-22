// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GEOMAPITEMHANDLECACHEDATA_H
#define _GEOMAPITEMHANDLECACHEDATA_H

@class NSData, NSDate;

#import <Foundation/Foundation.h>


@interface _GEOMapItemHandleCacheData : NSObject

@property (readonly, nonatomic) NSUInteger cost;
@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) NSDate *timestamp; // ivar: _timestamp


-(id)initWithTimestamp:(id)arg0 data:(id)arg1 ;


@end


#endif
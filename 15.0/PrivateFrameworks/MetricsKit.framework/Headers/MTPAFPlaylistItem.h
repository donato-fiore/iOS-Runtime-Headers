// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTPAFPLAYLISTITEM_H
#define MTPAFPLAYLISTITEM_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface MTPAFPlaylistItem : NSObject

@property (nonatomic) NSUInteger end; // ivar: _end
@property (copy) NSArray *metricsData; // ivar: _metricsData
@property (nonatomic) NSUInteger start; // ivar: _start


-(id)initWithStart:(NSUInteger)arg0 end:(NSUInteger)arg1 metricsData:(id)arg2 ;


@end


#endif
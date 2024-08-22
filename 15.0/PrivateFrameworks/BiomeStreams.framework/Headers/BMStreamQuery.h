// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMSTREAMQUERY_H
#define BMSTREAMQUERY_H

@class NSDateInterval;
@protocol BMStream;

#import <Foundation/Foundation.h>


@interface BMStreamQuery : NSObject

@property (readonly, nonatomic) NSDateInterval *interval; // ivar: _interval
@property (readonly, nonatomic) NSInteger origin; // ivar: _origin
@property (readonly, nonatomic) NSObject<BMStream> *stream; // ivar: _stream


+(id)publisherForStream:(id)arg0 interval:(id)arg1 ;
+(id)publisherForStream:(id)arg0 interval:(id)arg1 origin:(NSInteger)arg2 ;
-(id)init;
-(id)initWithStream:(id)arg0 interval:(id)arg1 origin:(NSInteger)arg2 ;


@end


#endif
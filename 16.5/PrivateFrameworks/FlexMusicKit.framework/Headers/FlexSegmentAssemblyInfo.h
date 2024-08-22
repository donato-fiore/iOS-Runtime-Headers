// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FLEXSEGMENTASSEMBLYINFO_H
#define FLEXSEGMENTASSEMBLYINFO_H

@class NSURL;

#import <Foundation/Foundation.h>

#import "FlexSegment.h"

@interface FlexSegmentAssemblyInfo : NSObject

@property (nonatomic) NSInteger barsUsed; // ivar: _barsUsed
@property (nonatomic) NSInteger duration; // ivar: _duration
@property (nonatomic) NSInteger offset; // ivar: _offset
@property (retain, nonatomic) FlexSegment *segment; // ivar: _segment
@property (retain, nonatomic) NSURL *url; // ivar: _url


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif
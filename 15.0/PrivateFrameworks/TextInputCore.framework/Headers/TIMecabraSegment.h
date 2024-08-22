// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIMECABRASEGMENT_H
#define TIMECABRASEGMENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TIMecabraSegment : NSObject

@property (retain, nonatomic) NSString *reading; // ivar: _reading
@property (retain, nonatomic) NSString *surface; // ivar: _surface


+(void)splitSegments:(id)arg0 at:(int)arg1 forPrefix:(*id)arg2 forSuffix:(*id)arg3 ;


@end


#endif
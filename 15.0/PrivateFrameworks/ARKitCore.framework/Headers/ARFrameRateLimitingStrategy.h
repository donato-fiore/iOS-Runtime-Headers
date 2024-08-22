// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARFRAMERATELIMITINGSTRATEGY_H
#define ARFRAMERATELIMITINGSTRATEGY_H

@class NSString;
@protocol ARTechniqueForwardingStrategy;

#import <Foundation/Foundation.h>

#import "ARCircularArray.h"

@interface ARFrameRateLimitingStrategy : NSObject <ARTechniqueForwardingStrategy>

 {
    NSInteger _frameRate;
    ARCircularArray *_mostRecentTimestamps;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldProcessData:(id)arg0 ;
-(BOOL)shouldRequestResultDataAtTimestamp:(CGFloat)arg0 context:(id)arg1 ;
-(id)initWithFrameRate:(NSInteger)arg0 ;


@end


#endif
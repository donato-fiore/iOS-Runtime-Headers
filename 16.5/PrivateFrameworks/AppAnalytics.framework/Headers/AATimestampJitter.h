// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AATIMESTAMPJITTER_H
#define AATIMESTAMPJITTER_H


#import <Foundation/Foundation.h>


@interface AATimestampJitter : NSObject

@property (nonatomic, readonly) BOOL enabled; // ivar: enabled
@property (nonatomic, readonly) CGFloat lowerBound; // ivar: lowerBound
@property (nonatomic, readonly) CGFloat upperBound; // ivar: upperBound


+(id)default;
-(id)init;
-(id)withEnabled:(BOOL)arg0 ;
-(id)withLowerBound:(CGFloat)arg0 ;
-(id)withUpperBound:(CGFloat)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MADRESULT_H
#define MADRESULT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MADResult : NSObject <NSSecureCoding>

 {
    NSUInteger _executionNanoseconds;
}


@property (readonly) NSUInteger executionNanoseconds;
@property (readonly) CGFloat executionTimeInterval;
@property (readonly, nonatomic) ? timerange; // ivar: _timerange


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
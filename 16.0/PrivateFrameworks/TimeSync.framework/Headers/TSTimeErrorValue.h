// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTIMEERRORVALUE_H
#define TSTIMEERRORVALUE_H


#import <Foundation/Foundation.h>


@interface TSTimeErrorValue : NSObject

@property (readonly, nonatomic) NSInteger error; // ivar: _error
@property (readonly, nonatomic) NSUInteger timestamp; // ivar: _timestamp


+(id)timeErrorSequenceWithTimestamps:(*NSUInteger)arg0 timeError:(*NSInteger)arg1 count:(NSInteger)arg2 ;
-(id)description;
-(id)initWithTimestamp:(NSUInteger)arg0 andError:(NSInteger)arg1 ;


@end


#endif
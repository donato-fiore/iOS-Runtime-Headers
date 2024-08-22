// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDURATIONSNAPSHOT_H
#define PKDURATIONSNAPSHOT_H


#import <Foundation/Foundation.h>


@interface PKDurationSnapshot : NSObject

@property (nonatomic, readonly) CGFloat duration; // ivar: duration
@property (nonatomic, readonly) CGFloat elapsedDuration; // ivar: elapsedDuration
@property (nonatomic, readonly) float rate; // ivar: rate
@property (nonatomic, readonly) CGFloat snapshotTime; // ivar: snapshotTime


-(id)init;
-(id)initWithSnapshotTime:(CGFloat)arg0 rate:(float)arg1 elapsedDuration:(CGFloat)arg2 duration:(CGFloat)arg3 ;


@end


#endif
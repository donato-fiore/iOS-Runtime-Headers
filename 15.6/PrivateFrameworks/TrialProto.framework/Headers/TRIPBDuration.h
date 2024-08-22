// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIPBDURATION_H
#define TRIPBDURATION_H



#import "TRIPBMessage.h"

@interface TRIPBDuration : TRIPBMessage

@property (nonatomic) int nanos;
@property (nonatomic) NSInteger seconds;
@property (nonatomic) CGFloat timeInterval;
@property (nonatomic) CGFloat timeIntervalSince1970;


+(id)descriptor;
-(id)initWithTimeInterval:(CGFloat)arg0 ;
-(id)initWithTimeIntervalSince1970:(CGFloat)arg0 ;


@end


#endif
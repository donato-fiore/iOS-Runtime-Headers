// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIPBTIMESTAMP_H
#define TRIPBTIMESTAMP_H

@class NSDate;


#import "TRIPBMessage.h"

@interface TRIPBTimestamp : TRIPBMessage

@property (retain, nonatomic) NSDate *date;
@property (nonatomic) int nanos;
@property (nonatomic) NSInteger seconds;
@property (nonatomic) CGFloat timeIntervalSince1970;


+(id)descriptor;
-(id)initWithDate:(id)arg0 ;
-(id)initWithTimeIntervalSince1970:(CGFloat)arg0 ;


@end


#endif
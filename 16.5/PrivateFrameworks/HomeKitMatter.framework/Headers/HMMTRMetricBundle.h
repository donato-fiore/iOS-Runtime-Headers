// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTRMETRICBUNDLE_H
#define HMMTRMETRICBUNDLE_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface HMMTRMetricBundle : NSObject

@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSDate *time; // ivar: _time


-(CGFloat)durationWithDate:(id)arg0 ;
-(id)initWithTime:(id)arg0 name:(id)arg1 ;


@end


#endif
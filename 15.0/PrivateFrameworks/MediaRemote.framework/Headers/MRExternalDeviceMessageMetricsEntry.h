// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MREXTERNALDEVICEMESSAGEMETRICSENTRY_H
#define MREXTERNALDEVICEMESSAGEMETRICSENTRY_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface MRExternalDeviceMessageMetricsEntry : NSObject

@property (nonatomic) NSUInteger avg; // ivar: _avg
@property (nonatomic) NSUInteger max; // ivar: _max
@property (nonatomic) NSUInteger min; // ivar: _min
@property (nonatomic) NSUInteger total; // ivar: _total
@property (retain, nonatomic) NSMutableArray *values; // ivar: _values


-(id)description;
-(id)init;
-(void)updateWithValue:(NSUInteger)arg0 ;


@end


#endif
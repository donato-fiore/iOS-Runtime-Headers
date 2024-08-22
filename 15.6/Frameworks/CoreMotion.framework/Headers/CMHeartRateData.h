// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMHEARTRATEDATA_H
#define CMHEARTRATEDATA_H

@class NSString, NSDate;
@protocol SRSampling;


#import "CMLogItem.h"

@interface CMHeartRateData : CMLogItem <SRSampling>



@property (readonly, nonatomic) CGFloat confidence; // ivar: _confidence
@property (readonly, nonatomic) NSInteger dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat heartRate; // ivar: _heartRate
@property (readonly, nonatomic) NSInteger mode; // ivar: _mode
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)dataSourceName:(NSInteger)arg0 ;
+(id)modeName:(NSInteger)arg0 ;
-(id)binarySampleRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBinarySampleRepresentation:(id)arg0 metadata:(id)arg1 timestamp:(CGFloat)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHeartRate:(CGFloat)arg0 confidence:(CGFloat)arg1 timestamp:(CGFloat)arg2 startDate:(id)arg3 error:(BOOL)arg4 dataSource:(NSInteger)arg5 mode:(NSInteger)arg6 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
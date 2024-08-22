// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIALLOCATIONSTATUS_H
#define TRIALLOCATIONSTATUS_H

@class NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TRIAllocationStatus : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) unsigned char type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(char *)notificationNameForDeploymentEnvironment:(int)arg0 ;
+(id)_defaultProvider;
+(id)activeExperimentInformationWithError:(*id)arg0 ;
+(id)defaultProvider;
+(id)sampleAllocationStatuses:(id)arg0 correlationId:(id)arg1 nrSamples:(unsigned int)arg2 ;
+(id)syncProxyWithErrorHandler:(id)arg0 ;
-(BOOL)isEqualToStatus:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(unsigned char)arg0 date:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
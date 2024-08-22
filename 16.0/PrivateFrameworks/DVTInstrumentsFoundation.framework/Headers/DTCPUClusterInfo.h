// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DTCPUCLUSTERINFO_H
#define DTCPUCLUSTERINFO_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DTCPUClusterInfo : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger clusterFlags; // ivar: _clusterFlags
@property (readonly, nonatomic) NSUInteger clusterID; // ivar: _clusterID
@property (readonly, nonatomic) BOOL isEfficiencyCore;
@property (readonly, nonatomic) BOOL isPerformanceCore;


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithClusterID:(NSUInteger)arg0 flags:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
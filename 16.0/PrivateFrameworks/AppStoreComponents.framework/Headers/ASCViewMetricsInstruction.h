// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASCVIEWMETRICSINSTRUCTION_H
#define ASCVIEWMETRICSINSTRUCTION_H

@class NSSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ASCMetricsData.h"

@interface ASCViewMetricsInstruction : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) ASCMetricsData *data; // ivar: _data
@property (readonly, copy, nonatomic) NSSet *invocationPoints; // ivar: _invocationPoints


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 invocationPoints:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
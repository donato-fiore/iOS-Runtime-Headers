// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIROLLOUTDEPLOYMENT_H
#define TRIROLLOUTDEPLOYMENT_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TRIRolloutDeployment : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) int deploymentId; // ivar: _deploymentId
@property (readonly, nonatomic) NSString *rolloutId; // ivar: _rolloutId
@property (readonly, nonatomic) NSString *shortDesc;


+(BOOL)supportsSecureCoding;
+(id)deploymentWithRolloutId:(id)arg0 deploymentId:(int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDeployment:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithReplacementDeploymentId:(int)arg0 ;
-(id)copyWithReplacementRolloutId:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRolloutId:(id)arg0 deploymentId:(int)arg1 ;
-(id)taskTag;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
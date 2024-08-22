// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMUSERACTIONPREDICTION_H
#define HMUSERACTIONPREDICTION_H

@class NSArray, NSString, NSUUID;
@protocol HMFLogging, HMFObject, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HMUserActionPrediction : NSObject <HMFLogging, HMFObject, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) CGFloat predictionScore; // ivar: _predictionScore
@property (readonly, copy) NSUUID *predictionTargetUUID; // ivar: _predictionTargetUUID
@property (readonly) NSUInteger predictionType; // ivar: _predictionType
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly) NSUInteger targetGroupType; // ivar: _targetGroupType
@property (readonly, copy) NSUUID *targetGroupUUID; // ivar: _targetGroupUUID
@property (readonly, copy) NSUUID *targetServiceUUID; // ivar: _targetServiceUUID


+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ignoreScore:(BOOL)arg1 ignoreGroupProperties:(BOOL)arg2 ;
-(BOOL)isEqualIgnoringScore:(id)arg0 ;
-(BOOL)isEqualIgnoringScoreAndGroupProperties:(id)arg0 ;
-(id)copyRemovingGroup;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPredictionTargetUUID:(id)arg0 predictionType:(NSUInteger)arg1 predictionScore:(CGFloat)arg2 ;
-(id)initWithPredictionTargetUUID:(id)arg0 targetServiceUUID:(id)arg1 predictionType:(NSUInteger)arg2 predictionScore:(CGFloat)arg3 ;
-(id)initWithPredictionTargetUUID:(id)arg0 targetServiceUUID:(id)arg1 targetGroupUUID:(id)arg2 targetGroupType:(NSUInteger)arg3 predictionType:(NSUInteger)arg4 predictionScore:(CGFloat)arg5 ;
-(id)initWithPredictionTargetUUID:(id)arg0 targetServiceUUID:(id)arg1 targetServiceGroupUUID:(id)arg2 predictionType:(NSUInteger)arg3 predictionScore:(CGFloat)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
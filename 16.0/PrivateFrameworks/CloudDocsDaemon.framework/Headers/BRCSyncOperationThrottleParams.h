// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCSYNCOPERATIONTHROTTLEPARAMS_H
#define BRCSYNCOPERATIONTHROTTLEPARAMS_H


#import <Foundation/Foundation.h>


@interface BRCSyncOperationThrottleParams : NSObject

@property (nonatomic) CGFloat inactivityKickbackDelay; // ivar: inactivityKickbackDelay
@property (nonatomic) CGFloat inactivityKickbackRatio; // ivar: inactivityKickbackRatio
@property (nonatomic) CGFloat maxWait; // ivar: maxWait
@property (nonatomic) CGFloat minWait; // ivar: minWait
@property (nonatomic) CGFloat ratioOnFailure; // ivar: ratioOnFailure
@property (nonatomic) CGFloat ratioOnQuotaErrorClear; // ivar: ratioOnQuotaErrorClear
@property (nonatomic) CGFloat ratioOnSuccess; // ivar: ratioOnSuccess


-(BOOL)check;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)doubleForKey:(id)arg0 inParams:(id)arg1 defaults:(id)arg2 ;
-(NSUInteger)hash;
-(id)initWithParams:(id)arg0 defaults:(id)arg1 ;
-(id)paramsToDictionary;
-(void)setupWithParams:(id)arg0 defaults:(id)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ITIDLETIMERDESCRIPTOR_H
#define ITIDLETIMERDESCRIPTOR_H

@class NSString, NSArray;
@protocol NSCopying, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface ITIdleTimerDescriptor : NSObject <NSCopying, BSDescriptionProviding>



@property (readonly, nonatomic) NSUInteger attentionMaintenanceEventMask; // ivar: _attentionMaintenanceEventMask
@property (readonly, nonatomic) NSUInteger attentionRecoveryEventMask; // ivar: _attentionRecoveryEventMask
@property (nonatomic) CGFloat attentionSamplingPeriod; // ivar: _attentionSamplingPeriod
@property (nonatomic) CGFloat attentionSamplingStartBeforeFirstTimeout;
@property (nonatomic) CGFloat attentionSamplingStartDelay; // ivar: _attentionSamplingStartDelay
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *timeouts; // ivar: _timeouts


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)setAttentionEventMaintenanceMask:(NSUInteger)arg0 recoveryMask:(NSUInteger)arg1 ;
-(void)setAttentionEventMask:(NSUInteger)arg0 ;


@end


#endif
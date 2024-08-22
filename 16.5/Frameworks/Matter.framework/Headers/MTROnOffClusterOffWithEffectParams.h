// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRONOFFCLUSTEROFFWITHEFFECTPARAMS_H
#define MTRONOFFCLUSTEROFFWITHEFFECTPARAMS_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTROnOffClusterOffWithEffectParams : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *effectId;
@property (copy, nonatomic) NSNumber *effectIdentifier; // ivar: _effectIdentifier
@property (copy, nonatomic) NSNumber *effectVariant; // ivar: _effectVariant
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout; // ivar: _serverSideProcessingTimeout
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif
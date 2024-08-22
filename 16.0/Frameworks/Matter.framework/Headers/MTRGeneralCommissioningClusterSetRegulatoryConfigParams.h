// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRGENERALCOMMISSIONINGCLUSTERSETREGULATORYCONFIGPARAMS_H
#define MTRGENERALCOMMISSIONINGCLUSTERSETREGULATORYCONFIGPARAMS_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface MTRGeneralCommissioningClusterSetRegulatoryConfigParams : NSObject

@property (retain, nonatomic) NSNumber *breadcrumb; // ivar: _breadcrumb
@property (retain, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (retain, nonatomic, getter=getNewRegulatoryConfig) NSNumber *newRegulatoryConfig; // ivar: _newRegulatoryConfig
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif
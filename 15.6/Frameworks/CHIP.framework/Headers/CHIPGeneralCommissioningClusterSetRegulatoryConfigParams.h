// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPGENERALCOMMISSIONINGCLUSTERSETREGULATORYCONFIGPARAMS_H
#define CHIPGENERALCOMMISSIONINGCLUSTERSETREGULATORYCONFIGPARAMS_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface CHIPGeneralCommissioningClusterSetRegulatoryConfigParams : NSObject

@property (retain, nonatomic) NSNumber *breadcrumb; // ivar: _breadcrumb
@property (retain, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (retain, nonatomic, getter=getNewRegulatoryConfig) NSNumber *newRegulatoryConfig; // ivar: _newRegulatoryConfig


-(id)init;


@end


#endif
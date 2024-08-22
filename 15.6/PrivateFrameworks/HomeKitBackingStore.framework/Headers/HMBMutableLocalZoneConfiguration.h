// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMBMUTABLELOCALZONECONFIGURATION_H
#define HMBMUTABLELOCALZONECONFIGURATION_H

@protocol HMBLocalZoneDelegate;


#import "HMBLocalZoneConfiguration.h"
#import "HMBModelContainer.h"

@interface HMBMutableLocalZoneConfiguration : HMBLocalZoneConfiguration

@property (nonatomic) BOOL createIfNeeded;
@property (weak, nonatomic) NSObject<HMBLocalZoneDelegate> *delegate;
@property (retain, nonatomic) HMBModelContainer *modelContainer;
@property (nonatomic) BOOL readOnly;




@end


#endif
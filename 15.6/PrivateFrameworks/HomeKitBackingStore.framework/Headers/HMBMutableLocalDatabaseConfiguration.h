// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMBMUTABLELOCALDATABASECONFIGURATION_H
#define HMBMUTABLELOCALDATABASECONFIGURATION_H



#import "HMBLocalDatabaseConfiguration.h"
#import "HMBModelContainer.h"

@interface HMBMutableLocalDatabaseConfiguration : HMBLocalDatabaseConfiguration

@property (retain, nonatomic) HMBModelContainer *modelContainer;
@property (nonatomic) BOOL readOnly;




@end


#endif
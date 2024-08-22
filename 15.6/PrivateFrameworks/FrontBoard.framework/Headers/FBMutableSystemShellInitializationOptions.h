// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FBMUTABLESYSTEMSHELLINITIALIZATIONOPTIONS_H
#define FBMUTABLESYSTEMSHELLINITIALIZATIONOPTIONS_H

@class NSString;


#import "FBSystemShellInitializationOptions.h"

@interface FBMutableSystemShellInitializationOptions : FBSystemShellInitializationOptions

@property (copy, nonatomic) NSString *independentWatchdogPortName;
@property (nonatomic) BOOL initializeDisplayManager;
@property (nonatomic) BOOL initializeReadyForInteraction;
@property (copy, nonatomic) id *registerAdditionalServicesBlock;
@property (nonatomic) BOOL resetDarkBootState;
@property (nonatomic) BOOL shouldWaitForMigrator;
@property (nonatomic) CGFloat systemSleepInterval;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif
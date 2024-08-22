// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSAPPDATAUSAGEPOLICYTERNARYCONTROLSPECIFIER_H
#define PSAPPDATAUSAGEPOLICYTERNARYCONTROLSPECIFIER_H

@class NSString;


#import "PSAppCellularUsageSpecifier.h"

@interface PSAppDataUsagePolicyTernaryControlSpecifier : PSAppCellularUsageSpecifier {
    BOOL _fullyInitialized;
}


@property (retain, nonatomic) NSString *displayName; // ivar: _displayName


-(id)cellularUsagePolicy;
-(id)initWithBundleID:(id)arg0 displayName:(id)arg1 statisticsCache:(id)arg2 ;
-(void)finishInitializing:(NSUInteger)arg0 ;
-(void)setCellularUsagePolicy:(id)arg0 ;


@end


#endif
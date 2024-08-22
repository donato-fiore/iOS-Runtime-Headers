// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFUTILITIES_H
#define PFUTILITIES_H


#import <Foundation/Foundation.h>


@interface PFUtilities : NSObject



+(BOOL)didStopInDebugger;
+(BOOL)hasEnabledManagedUserDefault:(id)arg0 ;
+(BOOL)hasInternalPhotosDiagnosticsCapability;
+(BOOL)isOnACPower:(*CGFloat)arg0 ;
+(BOOL)runningUnderDebugger;
+(void)getSystemVersionMajor:(*unsigned int)arg0 systemVersionMinor:(*unsigned int)arg1 systemVersionBugFixRev:(*unsigned int)arg2 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFDOWNLOADCONSISTENCY_H
#define PFDOWNLOADCONSISTENCY_H


#import <Foundation/Foundation.h>


@interface PFDownloadConsistency : NSObject {
    ? listener;
    ? identifier;
    ? resolutionStrategy;
    ? effectApplicator;
    ? environment;
}




-(id)init;
-(void)beginEnforcementWithCompletionHandler:(id)arg0 ;
-(void)endEnforcement;


@end


#endif
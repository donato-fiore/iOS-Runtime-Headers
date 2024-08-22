// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SRUIFTRIALMANAGER_H
#define SRUIFTRIALMANAGER_H

@class TRIClient, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SRUIFTrialManager : NSObject {
    int _trialProjectId;
    TRIClient *_trialClient;
    NSString *_trialNamespaceName;
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)_levelForFactor:(id)arg0 ;
-(id)initWithNamespace:(id)arg0 ;
-(id)initWithNamespace:(id)arg0 projectId:(int)arg1 ;
-(void)_initializeTrialClient;
-(void)_refreshTreatments;
-(void)boolValueForFactor:(id)arg0 defaultValue:(BOOL)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif
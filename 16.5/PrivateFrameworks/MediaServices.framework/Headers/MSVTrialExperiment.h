// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSVTRIALEXPERIMENT_H
#define MSVTRIALEXPERIMENT_H

@class TRIClient, NSString, TRIExperimentIdentifiers;

#import <Foundation/Foundation.h>


@interface MSVTrialExperiment : NSObject {
    TRIClient *_trialClient;
    NSString *_namespaceName;
    TRIExperimentIdentifiers *_identifiers;
    BOOL _identifiersFetched;
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSString *deploymentID;
@property (readonly, nonatomic) NSString *experimentID;
@property (readonly, nonatomic) NSString *treatmentID;


-(BOOL)boolForFactor:(id)arg0 ;
-(CGFloat)doubleForFactor:(id)arg0 ;
-(NSInteger)longForFactor:(id)arg0 ;
-(id)description;
-(id)identifiers;
-(id)initWithProjectID:(NSInteger)arg0 namespaceName:(id)arg1 ;
-(id)metadataForFactor:(id)arg0 ;
-(id)stringForFactor:(id)arg0 ;
-(void)invalidate;
-(void)refresh;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLMODELCOLLECTION_H
#define MLMODELCOLLECTION_H

@class NSString, NSDictionary, TRIClient;

#import <Foundation/Foundation.h>


@interface MLModelCollection : NSObject

@property (copy, nonatomic) NSString *deploymentID; // ivar: _deploymentID
@property (copy, nonatomic) NSDictionary *entries; // ivar: _entries
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *namespaceName; // ivar: _namespaceName
@property (readonly, nonatomic) TRIClient *trialClient; // ivar: _trialClient


+(Class)getTrialClientClass;
+(Class)getTrialDownloadOptionsClass;
+(Class)getTrialExperimentIdentifiersClass;
+(Class)getTrialFactorClass;
+(Class)getTrialFactorLevelClass;
+(Class)getTrialFileClass;
+(Class)getTrialLevelClass;
+(id)_namespaceNameFromCollectionIdentifier:(id)arg0 ;
+(id)beginAccessingModelCollectionWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
+(void)endAccessingModelCollectionWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)_downloadWithProgress:(id)arg0 ;
-(BOOL)_endAccess;
-(BOOL)_register;
-(id)_downloadOptions;
-(id)initWithIdentifier:(id)arg0 ;
-(void)_handleTrialUpdateForNamespaceName:(id)arg0 ;
-(void)_populateEntries;
-(void)_registerForUpdates;


@end


#endif
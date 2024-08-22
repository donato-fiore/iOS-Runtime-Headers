// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFLTASKCONTAINER_H
#define PFLTASKCONTAINER_H

@class NSString;
@protocol NSSecureCoding, PFLTaskStateProvider, MLBatchProvider, PFLTaskDelegate, PFLDataSource, OS_dispatch_queue, PFLTaskState;

#import <Foundation/Foundation.h>

#import "PFLTaskConfiguration.h"
#import "PFLNetworkResourceManager.h"

@interface PFLTaskContainer : NSObject <NSSecureCoding, PFLTaskStateProvider>



@property (readonly, nonatomic) PFLTaskConfiguration *configuration; // ivar: _configuration
@property (retain, nonatomic) NSObject<MLBatchProvider> *dataProvider; // ivar: _dataProvider
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PFLTaskDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSObject<PFLDataSource> *metricsProvider; // ivar: _metricsProvider
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) PFLNetworkResourceManager *resourceManager; // ivar: _resourceManager
@property (retain, nonatomic) NSObject<PFLTaskState> *state; // ivar: _state
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)descriptionFromState:(NSUInteger)arg0 ;
+(id)loadFromSavedStateURL:(id)arg0 ;
-(CGFloat)privatizationNormMax;
-(CGFloat)validationSplit;
-(NSUInteger)privatizationNormBinCount;
-(id)compiledModelURL;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 configuration:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 configuration:(id)arg1 state:(id)arg2 ;
-(id)layerNames;
-(id)metricsIdentifier;
-(id)modelConfiguration;
-(id)modelIdentifier;
-(id)taskIdentifier;
-(id)uploadResultsIdentifier;
-(int)modelVersion;
-(void)_saveState;
-(void)encodeWithCoder:(id)arg0 ;
-(void)markStateTransition:(id)arg0 ;
-(void)resume;
-(void)suspend;


@end


#endif
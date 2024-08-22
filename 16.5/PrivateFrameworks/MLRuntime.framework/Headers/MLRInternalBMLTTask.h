// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLRINTERNALBMLTTASK_H
#define MLRINTERNALBMLTTASK_H

@class NSString, TRIFactorsState, DESRecordSet, TRIClientBackgroundMLTask, TRIClient;
@protocol MLRInternalTaskRepresenting, NSSecureCoding, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MLRBMLTSchedulingPolicy.h"

@interface MLRInternalBMLTTask : NSObject <MLRInternalTaskRepresenting, NSSecureCoding>

 {
    NSObject<OS_dispatch_queue> *_syncQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TRIFactorsState *factorsState; // ivar: _factorsState
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *pluginID; // ivar: _pluginID
@property (readonly, nonatomic) MLRBMLTSchedulingPolicy *policy; // ivar: _policy
@property (readonly, nonatomic) DESRecordSet *recordSet; // ivar: _recordSet
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *taskID; // ivar: _taskID
@property (readonly, nonatomic) TRIClientBackgroundMLTask *triBMLT; // ivar: _triBMLT
@property (readonly, nonatomic) TRIClient *triClient; // ivar: _triClient


+(BOOL)supportsSecureCoding;
-(BOOL)downloadFactorsSynchronouslyWithError:(*id)arg0 ;
-(BOOL)evaluateTargetingExpressionForPlugin:(id)arg0 error:(*id)arg1 ;
-(BOOL)evaluateTargetingExpressionWithParameters:(id)arg0 error:(*id)arg1 ;
-(BOOL)fetchDataIfNecessaryWithError:(*id)arg0 ;
-(BOOL)submitTask:(id)arg0 result:(id)arg1 duration:(CGFloat)arg2 errorToBeSubmitted:(id)arg3 error:(*id)arg4 ;
-(id)MLRSandboxExtensionRequests;
-(id)MLRTaskWithError:(*id)arg0 ;
-(id)attachmentsDirURL;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTRIClientBackgroundMLTask:(id)arg0 factorsState:(id)arg1 ;
-(id)initWithTRIClientBackgroundMLTask:(id)arg0 factorsState:(id)arg1 recordSet:(id)arg2 ;
-(id)performOnPlugin:(id)arg0 error:(*id)arg1 ;
-(id)recipeURL;
-(id)submissionServer;
-(id)taskAttachmentsWithError:(*id)arg0 ;
-(id)taskParametersWithError:(*id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
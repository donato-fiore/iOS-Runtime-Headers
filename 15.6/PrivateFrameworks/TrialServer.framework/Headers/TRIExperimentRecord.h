// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIEXPERIMENTRECORD_H
#define TRIEXPERIMENTRECORD_H

@class NSDate, TRIExperimentDeployment, NSArray, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TRIClientExperimentArtifact.h"

@interface TRIExperimentRecord : NSObject <NSCopying>



@property (readonly, nonatomic) TRIClientExperimentArtifact *artifact; // ivar: _artifact
@property (readonly, nonatomic) int deploymentEnvironment; // ivar: _deploymentEnvironment
@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) TRIExperimentDeployment *experimentDeployment; // ivar: _experimentDeployment
@property (readonly, nonatomic) BOOL isManuallyTargeted; // ivar: _isManuallyTargeted
@property (readonly, nonatomic) BOOL isShadow; // ivar: _isShadow
@property (readonly, nonatomic) NSArray *namespaces; // ivar: _namespaces
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, nonatomic) NSInteger status; // ivar: _status
@property (readonly, nonatomic) NSString *treatmentId; // ivar: _treatmentId
@property (readonly, nonatomic) int type; // ivar: _type


+(id)recordWithDeploymentEnvironment:(int)arg0 experimentDeployment:(id)arg1 treatmentId:(id)arg2 type:(int)arg3 status:(NSInteger)arg4 startDate:(id)arg5 endDate:(id)arg6 namespaces:(id)arg7 isShadow:(BOOL)arg8 isManuallyTargeted:(BOOL)arg9 artifact:(id)arg10 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRecord:(id)arg0 ;
-(BOOL)isExpiredExperiment;
-(NSUInteger)hash;
-(id)copyWithReplacementArtifact:(id)arg0 ;
-(id)copyWithReplacementDeploymentEnvironment:(int)arg0 ;
-(id)copyWithReplacementEndDate:(id)arg0 ;
-(id)copyWithReplacementExperimentDeployment:(id)arg0 ;
-(id)copyWithReplacementIsManuallyTargeted:(BOOL)arg0 ;
-(id)copyWithReplacementIsShadow:(BOOL)arg0 ;
-(id)copyWithReplacementNamespaces:(id)arg0 ;
-(id)copyWithReplacementStartDate:(id)arg0 ;
-(id)copyWithReplacementStatus:(NSInteger)arg0 ;
-(id)copyWithReplacementTreatmentId:(id)arg0 ;
-(id)copyWithReplacementType:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithDeploymentEnvironment:(int)arg0 experimentDeployment:(id)arg1 treatmentId:(id)arg2 type:(int)arg3 status:(NSInteger)arg4 startDate:(id)arg5 endDate:(id)arg6 namespaces:(id)arg7 isShadow:(BOOL)arg8 isManuallyTargeted:(BOOL)arg9 artifact:(id)arg10 ;


@end


#endif
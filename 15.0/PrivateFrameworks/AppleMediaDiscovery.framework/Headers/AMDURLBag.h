// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMDURLBAG_H
#define AMDURLBAG_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AMDURLBag : NSObject

@property (retain, nonatomic) NSString *bizLogicURLString; // ivar: _bizLogicURLString
@property (retain, nonatomic) NSString *domain; // ivar: _domain
@property (retain, nonatomic) NSString *itemMetadataURLString; // ivar: _itemMetadataURLString
@property (retain, nonatomic) NSString *modelFetchURLString; // ivar: _modelFetchURLString
@property (retain, nonatomic) NSString *modelVersionURLString; // ivar: _modelVersionURLString
@property (retain, nonatomic) NSString *tasteProfileURLString; // ivar: _tasteProfileURLString
@property (retain, nonatomic) NSString *userTreatmentsFetchURLString; // ivar: _userTreatmentsFetchURLString
@property (retain, nonatomic) NSString *workflowsFetchAllURLString; // ivar: _workflowsFetchAllURLString
@property (retain, nonatomic) NSString *workflowsURLString; // ivar: _workflowsURLString


+(id)getStorefrontCodeForId:(id)arg0 withDefault:(id)arg1 ;
+(id)getStorefrontIdForCode:(id)arg0 withDefault:(id)arg1 ;
-(id)fetchUrlForModel:(id)arg0 andFormat:(id)arg1 withArchiveFromatVersion:(unsigned char)arg2 ;
-(id)initForDomain:(id)arg0 withTasteProfileURL:(id)arg1 itemMetadataURL:(id)arg2 modelVersionURL:(id)arg3 modelFetchURL:(id)arg4 fetchWorkflowsURL:(id)arg5 fetchBizLogicURL:(id)arg6 fetchAllWorkflowURL:(id)arg7 fetchUserTreatmentsURL:(id)arg8 ;
-(id)itemMetadataUrlForContents:(id)arg0 forStorefront:(id)arg1 ;
-(id)tasteProfileUrlForUser:(id)arg0 forStorefront:(id)arg1 withFeatureIds:(id)arg2 ;
-(id)urlForBusinessLogic;
-(id)urlForWorkflowsForUser:(id)arg0 forStorefront:(id)arg1 ;
-(id)userTreatmentsFetchURLForUser:(id)arg0 forStorefront:(id)arg1 ;
-(id)versionUrlForModel:(id)arg0 andFormat:(id)arg1 ;
-(id)workflowsFetchAllURLForStorefront:(id)arg0 ;


@end


#endif
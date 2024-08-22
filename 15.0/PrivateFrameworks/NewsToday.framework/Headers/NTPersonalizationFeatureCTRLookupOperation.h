// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPERSONALIZATIONFEATURECTRLOOKUPOPERATION_H
#define NTPERSONALIZATIONFEATURECTRLOOKUPOPERATION_H

@class FCOperation, NSArray, FCPersonalizationTreatment, NSDictionary;
@protocol FCReadonlyPersonalizationAggregateStore;



@interface NTPersonalizationFeatureCTRLookupOperation : FCOperation

@property (retain, nonatomic) NSObject<FCReadonlyPersonalizationAggregateStore> *aggregateStore; // ivar: _aggregateStore
@property (copy, nonatomic) id *lookupCompletion; // ivar: _lookupCompletion
@property (copy, nonatomic) NSArray *lookupRequests; // ivar: _lookupRequests
@property (copy, nonatomic) FCPersonalizationTreatment *personalizationTreatment; // ivar: _personalizationTreatment
@property (copy, nonatomic) NSDictionary *result; // ivar: _result


-(BOOL)validateOperation;
-(id)init;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif
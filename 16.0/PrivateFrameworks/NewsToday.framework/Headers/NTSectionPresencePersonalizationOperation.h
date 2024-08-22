// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTSECTIONPRESENCEPERSONALIZATIONOPERATION_H
#define NTSECTIONPRESENCEPERSONALIZATIONOPERATION_H

@class FCOperation, NSDictionary, NSArray, FCPersonalizationTreatment;
@protocol FCReadonlyPersonalizationAggregateStore;



@interface NTSectionPresencePersonalizationOperation : FCOperation

@property (copy, nonatomic) id *absolutePresenceHandler; // ivar: _absolutePresenceHandler
@property (copy, nonatomic) NSDictionary *absolutePresenceResult; // ivar: _absolutePresenceResult
@property (copy, nonatomic) NSArray *absoluteRequests; // ivar: _absoluteRequests
@property (retain, nonatomic) NSObject<FCReadonlyPersonalizationAggregateStore> *aggregateStore; // ivar: _aggregateStore
@property (copy, nonatomic) id *personalizationCompletion; // ivar: _personalizationCompletion
@property (copy, nonatomic) FCPersonalizationTreatment *personalizationTreatment; // ivar: _personalizationTreatment
@property (copy, nonatomic) id *relativePresenceHandler; // ivar: _relativePresenceHandler
@property (copy, nonatomic) NSDictionary *relativePresenceResult; // ivar: _relativePresenceResult
@property (copy, nonatomic) NSArray *relativeRequests; // ivar: _relativeRequests


-(BOOL)validateOperation;
-(id)init;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif
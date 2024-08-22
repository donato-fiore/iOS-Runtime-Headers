// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTMETRICSDATA_H
#define MTMETRICSDATA_H

@class NSArray, NSMutableArray, NSDictionary, NSMutableDictionary;


#import "MTObject.h"
#import "MTCallerSuppliedFields.h"
#import "MTPromise.h"

@interface MTMetricsData : MTObject

@property (retain, nonatomic) NSArray *additionalBaseData; // ivar: _additionalBaseData
@property (retain, nonatomic) NSMutableArray *additionalData; // ivar: _additionalData
@property (retain, nonatomic) NSArray *additionalEventData; // ivar: _additionalEventData
@property (nonatomic, getter=isAnonymous, setter=setAnonymous:) BOOL anonymous; // ivar: _anonymous
@property (retain, nonatomic) NSDictionary *baseFields; // ivar: _baseFields
@property (retain, nonatomic) MTCallerSuppliedFields *callerSuppliedFields; // ivar: _callerSuppliedFields
@property (retain, nonatomic) MTPromise *configBaseFields; // ivar: _configBaseFields
@property (retain, nonatomic) NSDictionary *eventSpecificFields; // ivar: _eventSpecificFields
@property (retain, nonatomic) NSMutableDictionary *performanceData; // ivar: _performanceData
@property (retain, nonatomic) NSMutableArray *postProcessingBlocks; // ivar: _postProcessingBlocks
@property (retain, nonatomic) NSArray *registeredEventData; // ivar: _registeredEventData


-(id)composeFieldsMaps;
-(id)debugDescription;
-(id)getAdditionalData;
-(id)getPostProcessingBlocks;
-(id)recordEvent;
-(id)toDictionary;
-(id)userAndClientIDFields;
-(void)addFields:(id)arg0 ;
-(void)addFieldsWithDictionary:(id)arg0 ;
-(void)addFieldsWithPromise:(id)arg0 ;
-(void)addPostProcessingBlock:(id)arg0 ;
-(void)addPostProcessingBlocks:(id)arg0 ;
-(void)cancelUnfinishedPromisedEventData;


@end


#endif
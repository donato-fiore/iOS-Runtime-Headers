// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UPQUERYRUNNER_H
#define UPQUERYRUNNER_H

@class NSSet;

#import <Foundation/Foundation.h>

#import "UPCalibration.h"
#import "UPContextualizer.h"
#import "UPDialogActConverter.h"
#import "UPParserModel.h"

@interface UPQueryRunner : NSObject

@property (readonly, nonatomic) UPCalibration *_calibration; // ivar: __calibration
@property (readonly, nonatomic) UPContextualizer *_contextualizer; // ivar: __contextualizer
@property (readonly, nonatomic) UPDialogActConverter *_dialogActConverter; // ivar: __dialogActConverter
@property (readonly, nonatomic) UPParserModel *coreModel; // ivar: _coreModel
@property (readonly, nonatomic) NSSet *domainModelBundles; // ivar: _domainModelBundles


-(id)combinedResultFromResults:(id)arg0 ;
-(id)dialogActFromQuery:(id)arg0 ;
-(id)domainModels;
-(id)initWithCoreModel:(id)arg0 domainModelBundles:(id)arg1 ;
-(id)initWithCoreModel:(id)arg0 domainModels:(id)arg1 ;
-(id)multiTurnPredictionFromQuery:(id)arg0 modelIdentifierToDomainResults:(id)arg1 dialogAct:(id)arg2 error:(*id)arg3 ;
-(id)predictionFromProtobufQuery:(id)arg0 error:(*id)arg1 ;
-(id)predictionFromProtobufQueryAndPlumSpans:(id)arg0 plumSpans:(id)arg1 error:(*id)arg2 ;
-(id)predictionFromQuery:(id)arg0 error:(*id)arg1 ;
-(id)singleTurnPredictionFromDomainResults:(id)arg0 ;


@end


#endif
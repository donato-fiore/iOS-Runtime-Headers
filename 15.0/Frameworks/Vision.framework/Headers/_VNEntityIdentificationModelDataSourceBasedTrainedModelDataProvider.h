// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _VNENTITYIDENTIFICATIONMODELDATASOURCEBASEDTRAINEDMODELDATAPROVIDER_H
#define _VNENTITYIDENTIFICATIONMODELDATASOURCEBASEDTRAINEDMODELDATAPROVIDER_H

@class NSString;
@protocol VNEntityIdentificationModelTrainedModelDataProvider, VNEntityIdentificationModelDataSource;

#import <Foundation/Foundation.h>

#import "VNEntityIdentificationModel.h"

@interface _VNEntityIdentificationModelDataSourceBasedTrainedModelDataProvider : NSObject <VNEntityIdentificationModelTrainedModelDataProvider>

 {
    VNEntityIdentificationModel *_entityIdentificationModel;
    id<VNEntityIdentificationModelDataSource> *_dataSource;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)trainedModelEntityCount;
-(NSUInteger)trainedModelIndexOfEntityWithUniqueIdentifier:(id)arg0 ;
-(NSUInteger)trainedModelNumberOfObservationsForEntityAtIndex:(NSUInteger)arg0 ;
-(id)initWithEntityIdentificationModel:(id)arg0 dataSource:(id)arg1 ;
-(id)trainedModelObservationAtIndex:(NSUInteger)arg0 forEntityAtIndex:(NSUInteger)arg1 ;
-(id)trainedModelUniqueIdentifierOfEntityAtIndex:(NSUInteger)arg0 ;


@end


#endif
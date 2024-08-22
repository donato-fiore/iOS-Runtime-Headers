// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _VNPERSONSMODELDATASOURCEBASEDDATAPROVIDER_H
#define _VNPERSONSMODELDATASOURCEBASEDDATAPROVIDER_H

@class NSString;
@protocol VNPersonsModelFaceModelDataProvider, VNPersonsModelDataSource;

#import <Foundation/Foundation.h>

#import "VNPersonsModel.h"

@interface _VNPersonsModelDataSourceBasedDataProvider : NSObject <VNPersonsModelFaceModelDataProvider>

 {
    VNPersonsModel *_personsModel;
    id<VNPersonsModelDataSource> *_dataSource;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)faceModelIndexOfPersonWithUniqueIdentifier:(id)arg0 ;
-(NSUInteger)faceModelNumberOfFaceObservationsForPersonAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)faceModelPersonsCount;
-(id)faceModelFaceObservationAtIndex:(NSUInteger)arg0 forPersonAtIndex:(NSUInteger)arg1 ;
-(id)faceModelUniqueIdentifierOfPersonAtIndex:(NSUInteger)arg0 ;
-(id)initWithPersonsModel:(id)arg0 dataSource:(id)arg1 ;


@end


#endif
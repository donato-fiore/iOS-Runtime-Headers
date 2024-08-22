// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMDONDEVICETESTER_H
#define AMDONDEVICETESTER_H


#import <Foundation/Foundation.h>

#import "AMDCoreDataPersistentContainer.h"

@interface AMDOnDeviceTester : NSObject

@property (retain, nonatomic) AMDCoreDataPersistentContainer *container; // ivar: _container


-(id)init;
-(void)testAddEvent:(*id)arg0 ;
-(void)testAggregation:(*id)arg0 ;
-(void)testClient:(*id)arg0 ;
-(void)testDESRecordWriter:(*id)arg0 ;
-(void)testFeatureDescriptor:(*id)arg0 ;
-(void)testOnDeviceTasteProfile:(id)arg0 error:(*id)arg1 ;
-(void)testRunInference:(*id)arg0 ;
-(void)testSaveConfigAndDownloadModel:(*id)arg0 ;


@end


#endif
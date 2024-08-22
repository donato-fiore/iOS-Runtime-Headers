// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMDONDEVICETESTER_H
#define AMDONDEVICETESTER_H


#import <Foundation/Foundation.h>

#import "AMDCoreDataPersistentContainer.h"

@interface AMDOnDeviceTester : NSObject

@property (retain, nonatomic) AMDCoreDataPersistentContainer *container; // ivar: _container


+(BOOL)initEnv:(id)arg0 withDomain:(id)arg1 userId:(id)arg2 andStoreFrontId:(id)arg3 ;
+(id)deleteEvents:(*id)arg0 ;
+(id)fetchEvents:(*id)arg0 ;
+(id)fetchModelUrls:(*id)arg0 ;
+(id)fetchTasteProfile:(*id)arg0 ;
+(id)getAppSegments:(*id)arg0 ;
+(id)getEnvironments;
+(void)initPersistentContainer;
+(void)refreshOnDeviceTasteProfile:(id)arg0 withUserId:(id)arg1 andStoreFrontId:(unsigned int)arg2 error:(*id)arg3 ;
+(void)saveDescriptors:(id)arg0 forDomain:(NSInteger)arg1 error:(*id)arg2 ;
+(void)saveEvent:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(void)testAddEvent:(*id)arg0 ;
-(void)testAggregation:(*id)arg0 ;
-(void)testClient:(*id)arg0 ;
-(void)testFeatureDescriptor:(*id)arg0 ;
-(void)testOnDeviceTasteProfile:(id)arg0 error:(*id)arg1 ;
-(void)testRunInference:(*id)arg0 ;
-(void)testSaveConfigAndDownloadModel:(*id)arg0 ;


@end


#endif
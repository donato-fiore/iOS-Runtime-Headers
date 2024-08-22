// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PVFACEIDMODEL_H
#define PVFACEIDMODEL_H


#import <Foundation/Foundation.h>


@interface PVFaceIDModel : NSObject



+(BOOL)addFaceObservations:(id)arg0 forPersonIdentifier:(id)arg1 toModel:(id)arg2 error:(*id)arg3 ;
+(BOOL)persistModel:(id)arg0 toPath:(id)arg1 error:(*id)arg2 ;
+(id)classifyFaceObservation:(id)arg0 withModel:(id)arg1 error:(*id)arg2 ;
+(id)defaultConfiguration;
+(id)faceObservationFromFaceprintData:(id)arg0 ;
+(id)loadModelAtPath:(id)arg0 error:(*id)arg1 ;
+(id)modelFileName;
+(id)newMutablePersonsModel;


@end


#endif
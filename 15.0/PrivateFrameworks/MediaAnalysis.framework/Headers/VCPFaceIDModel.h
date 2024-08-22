// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPFACEIDMODEL_H
#define VCPFACEIDMODEL_H


#import <Foundation/Foundation.h>


@interface VCPFaceIDModel : NSObject



+(BOOL)addFaceObservations:(id)arg0 forPersonIdentifier:(id)arg1 toModel:(id)arg2 error:(*id)arg3 ;
+(BOOL)persistModel:(id)arg0 toPath:(id)arg1 error:(*id)arg2 ;
+(BOOL)persistPetsModel:(id)arg0 toPath:(id)arg1 error:(*id)arg2 ;
+(float)petClassificationThreshold;
+(id)_loadModelAtPath:(id)arg0 error:(*id)arg1 ;
+(id)_loadPetsModelAtPath:(id)arg0 error:(*id)arg1 ;
+(id)animalObservationFromAnimalprintData:(id)arg0 ;
+(id)classifyAnimalObservation:(id)arg0 withModel:(id)arg1 error:(*id)arg2 ;
+(id)classifyFaceObservation:(id)arg0 withModel:(id)arg1 error:(*id)arg2 ;
+(id)faceObservationFromFaceprintData:(id)arg0 ;
+(id)loadVIPModelAtPath:(id)arg0 withVIPType:(NSUInteger)arg1 error:(*id)arg2 ;
+(id)newMutablePersonsModel;
+(id)personVIPModelFileName;
+(id)petVIPModelFileName;


@end


#endif
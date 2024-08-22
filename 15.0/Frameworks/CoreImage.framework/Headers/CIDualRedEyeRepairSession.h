// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIDUALREDEYEREPAIRSESSION_H
#define CIDUALREDEYEREPAIRSESSION_H

@class NSArray, NSDictionary, NSDate;
@protocol MTLCommandBuffer, MTLCommandQueue, MTLTexture;

#import <Foundation/Foundation.h>

#import "CIContext.h"
#import "CIRenderDestination.h"
#import "CIImage.h"
#import "CIDualRedEyeRepairTuning.h"

@interface CIDualRedEyeRepairSession : NSObject {
    *__CVBuffer _primary;
    *__CVBuffer _secondary;
    *__CVBuffer _output;
}


@property (retain, nonatomic) NSObject<MTLCommandBuffer> *commandBuffer; // ivar: commandBuffer
@property (retain, nonatomic) NSObject<MTLCommandQueue> *commandQueue; // ivar: commandQueue
@property (retain, nonatomic) CIContext *context; // ivar: context
@property (retain, nonatomic) CIRenderDestination *destination; // ivar: destination
@property (retain, nonatomic) NSArray *faces; // ivar: faces
@property (retain, nonatomic) NSDictionary *imageProperties; // ivar: imageProperties
@property (retain, nonatomic) NSDictionary *metadata; // ivar: metadata
@property (retain, nonatomic) NSArray *observations; // ivar: observations
@property (retain, nonatomic) NSObject<MTLTexture> *outputTexture; // ivar: outputTexture
@property (retain, nonatomic) CIImage *primaryImage; // ivar: primaryImage
@property (retain, nonatomic) NSObject<MTLTexture> *primaryTexture; // ivar: primaryTexture
@property (retain, nonatomic) CIImage *secondaryImage; // ivar: secondaryImage
@property (retain, nonatomic) NSObject<MTLTexture> *secondaryTexture; // ivar: secondaryTexture
@property (retain, nonatomic) NSDate *timestamp; // ivar: timestamp
@property (retain, nonatomic) CIDualRedEyeRepairTuning *tuning; // ivar: tuning
@property (retain, nonatomic) NSDictionary *tuningParametersByPortType; // ivar: tuningParametersByPortType


-(BOOL)_repairPrimaryWithSecondary:(struct __CVBuffer *)arg0 to:(struct __CVBuffer *)arg1 ;
-(BOOL)prepareRepair;
-(BOOL)prepareRepairWithTuningParametersByPortType:(id)arg0 ;
-(BOOL)prewarm;
-(BOOL)renderUsingPixelBuffers;
-(BOOL)renderUsingProvidedCommandQueue;
-(BOOL)repairFace:(id)arg0 filter:(id)arg1 ;
-(BOOL)repairPrimaryWithSecondary:(struct __CVBuffer *)arg0 ;
-(BOOL)setPrimary:(struct __CVBuffer *)arg0 observations:(id)arg1 metadata:(id)arg2 ;
-(BOOL)validateRenderState;
-(id)init;
-(id)redEyeFaceFromObservation:(id)arg0 exifOrientation:(int)arg1 ;
-(int)validateRepair;
-(int)validateSetPrimary;
-(void)cleanupState;
-(void)customizeRepairFilter:(id)arg0 forFace:(id)arg1 ;
-(void)dealloc;
-(void)dumpInputs;
-(void)dumpObservation:(id)arg0 index:(int)arg1 ;
-(void)dumpSecondary;


@end


#endif
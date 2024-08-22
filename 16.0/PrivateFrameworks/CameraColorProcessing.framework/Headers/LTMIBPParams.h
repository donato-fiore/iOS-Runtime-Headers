// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LTMIBPPARAMS_H
#define LTMIBPPARAMS_H

@class NSString, NSDictionary;
@protocol LTMIBPParams, MTLTexture;

#import <Foundation/Foundation.h>


@interface LTMIBPParams : NSObject <LTMIBPParams>



@property (nonatomic) BOOL calcGlobalHistOnROI; // ivar: _calcGlobalHistOnROI
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL digitalFlash; // ivar: _digitalFlash
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *inMetaData; // ivar: _inMetaData
@property (retain, nonatomic) NSObject<MTLTexture> *inRGBImageUInt16Tex; // ivar: _inRGBImageUInt16Tex
@property (nonatomic) int optimizationLevel; // ivar: _optimizationLevel
@property (retain, nonatomic) NSDictionary *outMetaData; // ivar: _outMetaData
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDictionary *validBufferRect; // ivar: _validBufferRect


-(void)reset;


@end


#endif
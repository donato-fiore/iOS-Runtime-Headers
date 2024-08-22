// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PTCINEMATOGRAPHYNETWORKPARAMETERS_H
#define PTCINEMATOGRAPHYNETWORKPARAMETERS_H

@class NSArray, NSSet;

#import <Foundation/Foundation.h>


@interface PTCinematographyNetworkParameters : NSObject

@property float expectedFPS; // ivar: _expectedFPS
@property float forgetDetectionsAfterSeconds; // ivar: _forgetDetectionsAfterSeconds
@property (retain) NSArray *inputSchemas; // ivar: _inputSchemas
@property BOOL runOnlyWhenDetectorDidRun; // ivar: _runOnlyWhenDetectorDidRun
@property (retain) NSSet *supportedDetectionTypes; // ivar: _supportedDetectionTypes
@property (readonly) NSUInteger totalInputFloatCount; // ivar: _totalInputFloatCount


-(id)_defaultSupportedDetectionTypes;
-(id)initWithURL:(id)arg0 ;
-(void)_processInputSchemaDicts:(id)arg0 ;


@end


#endif
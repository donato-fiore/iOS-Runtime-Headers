// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _EARSPEAKERCODEINFO_H
#define _EARSPEAKERCODEINFO_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface _EARSpeakerCodeInfo : NSObject

@property (readonly, nonatomic) NSString *accumulatedGradient; // ivar: _accumulatedGradient
@property (copy, nonatomic) NSString *inferenceSpeakerCode; // ivar: _inferenceSpeakerCode
@property (nonatomic) BOOL isSpeakerCodeUsed; // ivar: _isSpeakerCodeUsed
@property (readonly, nonatomic) NSNumber *nnetVersion; // ivar: _nnetVersion
@property (copy, nonatomic) NSNumber *numFrames; // ivar: _numFrames
@property (readonly, nonatomic) NSNumber *recognitionOffset; // ivar: _recognitionOffset
@property (readonly, nonatomic) NSNumber *trainingOffset; // ivar: _trainingOffset
@property (readonly, nonatomic) NSString *trainingSpeakerCode; // ivar: _trainingSpeakerCode


-(id)initWithLanguage:(id)arg0 ;


@end


#endif
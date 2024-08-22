// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPHUMAN_H
#define VCPHUMAN_H

@class VNTorsoprint;

#import <Foundation/Foundation.h>


@interface VCPHuman : NSObject

@property CGRect bounds; // ivar: _bounds
@property float confidence; // ivar: _confidence
@property NSUInteger flags; // ivar: _flags
@property (retain) VNTorsoprint *torsoprint; // ivar: _torsoprint


+(NSUInteger)flagsFromKeypoints:(id)arg0 withMinConfidence:(float)arg1 ;
-(id)init;


@end


#endif
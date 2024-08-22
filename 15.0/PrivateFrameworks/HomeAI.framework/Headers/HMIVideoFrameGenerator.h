// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIVIDEOFRAMEGENERATOR_H
#define HMIVIDEOFRAMEGENERATOR_H

@class HMFObject;


#import "HMIVideoAssetReader.h"

@interface HMIVideoFrameGenerator : HMFObject

@property (readonly) HMIVideoAssetReader *reader; // ivar: _reader


-(id)initWithVideoFragment:(id)arg0 ;
-(void)generateVideoFramesForTimes:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPCLASSIFICATION_H
#define VCPCLASSIFICATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VCPClassification : NSObject

@property float duration; // ivar: _duration
@property (retain) NSString *sceneId; // ivar: _sceneId
@property float sumConfidence; // ivar: _sumConfidence


-(id)initWithSceneId:(id)arg0 withDuration:(float)arg1 withConfidence:(float)arg2 ;


@end


#endif
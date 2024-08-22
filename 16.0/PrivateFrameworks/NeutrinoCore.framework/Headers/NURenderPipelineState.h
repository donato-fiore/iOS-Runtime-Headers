// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NURENDERPIPELINESTATE_H
#define NURENDERPIPELINESTATE_H

@class NSMutableArray, NSArray, NSDictionary;
@protocol NSCopying, NUDevice;

#import <Foundation/Foundation.h>

#import "NURenderTagGroup.h"

@interface NURenderPipelineState : NSObject <NSCopying>

 {
    NSMutableArray *_groupStack;
}


@property NSInteger auxiliaryImageType; // ivar: _auxiliaryImageType
@property (readonly) NURenderTagGroup *currentGroup; // ivar: _currentGroup
@property (retain, nonatomic) NSObject<NUDevice> *device; // ivar: _device
@property BOOL disableIntermediateCaching; // ivar: _disableIntermediateCaching
@property NSInteger evaluationMode; // ivar: _evaluationMode
@property (readonly) NSUInteger groupCount; // ivar: _groupCount
@property NSInteger mediaComponentType; // ivar: _mediaComponentType
@property (copy, nonatomic) NSArray *pipelineFilters; // ivar: _pipelineFilters
@property ? rawTime; // ivar: _rawTime
@property (readonly) NURenderTagGroup *rootGroup; // ivar: _rootGroup
@property NSInteger roundingPolicy; // ivar: _roundingPolicy
@property NSInteger sampleMode; // ivar: _sampleMode
@property ? scale; // ivar: _scale
@property (readonly) NSInteger serialNumber; // ivar: _serialNumber
@property ? time; // ivar: _time
@property (copy, nonatomic) NSDictionary *videoFrames; // ivar: _videoFrames
@property (copy, nonatomic) NSDictionary *videoMetadataSamples; // ivar: _videoMetadataSamples


-(BOOL)applyPipelineSettings:(id)arg0 error:(*id)arg1 ;
-(BOOL)endGroupWithName:(id)arg0 error:(*id)arg1 ;
-(id)beginGroupWithName:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initForCopy;
-(id)pipelineSettingsFromSourceSettings:(id)arg0 ;
-(void)resetRenderTagGroups;


@end


#endif
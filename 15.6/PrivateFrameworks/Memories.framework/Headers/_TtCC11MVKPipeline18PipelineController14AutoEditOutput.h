// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTCC11MVKPIPELINE18PIPELINECONTROLLER14AUTOEDITOUTPUT_H
#define _TTCC11MVKPIPELINE18PIPELINECONTROLLER14AUTOEDITOUTPUT_H

@class NSDictionary, AVPlayerItem, NSSet;

#import <Foundation/Foundation.h>

#import "MiroBlueprint.h"
#import "MiroPickList.h"
#import "Project.h"

@interface _TtCC11MVKPipeline18PipelineController14AutoEditOutput : NSObject {
    ? suggestions;
    ? freezeRanges;
}


@property (nonatomic, readonly) MiroBlueprint *blueprint; // ivar: blueprint
@property (nonatomic, readonly) Buckets buckets; // ivar: buckets
@property (nonatomic, readonly) NSInteger downloadErrorCount; // ivar: downloadErrorCount
@property (nonatomic, readonly) CGFloat duration; // ivar: duration
@property (nonatomic, readonly) CGFloat durationRange; // ivar: durationRange
@property (nonatomic, readonly) NSDictionary *freezeRanges;
@property (nonatomic, readonly) CGFloat maxDuration; // ivar: maxDuration
@property (nonatomic, readonly) CGFloat maxDurationRange; // ivar: maxDurationRange
@property (nonatomic, readonly) NSInteger pickedItemCount; // ivar: pickedItemCount
@property (nonatomic, readonly) MiroPickList *picklist; // ivar: picklist
@property (nonatomic, readonly) AVPlayerItem *playerItem; // ivar: playerItem
@property (nonatomic, readonly) Project *project; // ivar: project
@property (nonatomic, readonly) NSSet *suggestions;
@property (nonatomic, readonly) NSInteger totalAssetCount; // ivar: totalAssetCount


-(id)init;


@end


#endif
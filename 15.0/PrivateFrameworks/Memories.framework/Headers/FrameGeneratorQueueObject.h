// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FRAMEGENERATORQUEUEOBJECT_H
#define FRAMEGENERATORQUEUEOBJECT_H

@class AVAssetImageGenerator, NSArray;

#import <Foundation/Foundation.h>


@interface FrameGeneratorQueueObject : NSObject

@property (copy, nonatomic) id *completionBlock; // ivar: m_completionBlock
@property (retain, nonatomic) AVAssetImageGenerator *generator; // ivar: m_whichInstance
@property (retain, nonatomic) NSArray *times; // ivar: m_times


+(id)queueObjectForGenerator:(id)arg0 withTimes:(id)arg1 completionBlock:(id)arg2 ;
-(id)description;
-(void)dealloc;


@end


#endif
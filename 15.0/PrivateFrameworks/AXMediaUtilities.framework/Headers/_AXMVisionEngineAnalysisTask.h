// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _AXMVISIONENGINEANALYSISTASK_H
#define _AXMVISIONENGINEANALYSISTASK_H

@class NSUUID;


#import "AXMTask.h"
#import "AXMVisionPipelineContext.h"
#import "AXMSourceNode.h"

@interface _AXMVisionEngineAnalysisTask : AXMTask

@property (retain, nonatomic) AXMVisionPipelineContext *context; // ivar: _context
@property (retain, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (retain, nonatomic) AXMSourceNode *source; // ivar: _source


+(id)itemWithSource:(id)arg0 context:(id)arg1 ;
-(id)initWithSource:(id)arg0 context:(id)arg1 ;


@end


#endif
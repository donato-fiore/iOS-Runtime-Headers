// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTCC24INTELLIGENCEPLATFORMCORE24KNOWLEDGECONSTRUCTIONXPC6SERVER_H
#define _TTCC24INTELLIGENCEPLATFORMCORE24KNOWLEDGECONSTRUCTIONXPC6SERVER_H

@protocol GDKnowledgeConstructionXPCProtocol;

#import <Foundation/Foundation.h>


@interface _TtCC24IntelligencePlatformCore24KnowledgeConstructionXPC6Server : NSObject <GDKnowledgeConstructionXPCProtocol>





-(?)checkInWithCompletion;
-(?)runFullPipelineWithReasoncompletion;
-(?)stopPipelineWithCompletion;
-(id)init;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAXCONTEXTUALACTIONSPREDICTORDRIVER_H
#define CAXCONTEXTUALACTIONSPREDICTORDRIVER_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "CAXContextualActionsPredictor.h"

@interface CAXContextualActionsPredictorDriver : NSObject

@property (retain, nonatomic) NSDictionary *configDict; // ivar: _configDict
@property (retain, nonatomic) CAXContextualActionsPredictor *globalModel; // ivar: _globalModel
@property (retain, nonatomic) CAXContextualActionsPredictor *personalizedModel; // ivar: _personalizedModel


+(id)decoderUrl;
+(id)encoderUrl;
-(id)decodeArrayOfCAElements:(id)arg0 fromDecoderUrl:(id)arg1 ;
-(id)decodeArrayOfCAElementsIntoActionIds:(id)arg0 fromDecoderUrl:(id)arg1 ;
-(id)initWithConfigUrl:(id)arg0 ;
-(id)initWithConfigUrl:(id)arg0 encoderUrl:(id)arg1 decoderUrl:(id)arg2 globalModelUrl:(id)arg3 personalizedModelUrl:(id)arg4 ;
-(id)predictWithConfidenceFromContext:(id)arg0 numActions:(NSUInteger)arg1 ;


@end


#endif
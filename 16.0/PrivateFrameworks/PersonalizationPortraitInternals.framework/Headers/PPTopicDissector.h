// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPTOPICDISSECTOR_H
#define PPTOPICDISSECTOR_H

@class CKContextClient;

#import <Foundation/Foundation.h>

#import "PPTextToTopicTransform.h"

@interface PPTopicDissector : NSObject {
    CKContextClient *_contextClient;
    PPTextToTopicTransform *_transform;
}




+(id)sharedInstance;
-(id)extractionsFromContextKitWithText:(id)arg0 isPlainText:(BOOL)arg1 bundleId:(id)arg2 language:(id)arg3 weight:(CGFloat)arg4 ;
-(id)init;
-(id)initWithContextClient:(id)arg0 ;
-(id)topicsInText:(id)arg0 isPlainText:(BOOL)arg1 source:(id)arg2 cloudSync:(BOOL)arg3 language:(id)arg4 topicAlgorithms:(id)arg5 namedEntityAlgorithms:(id)arg6 weight:(CGFloat)arg7 ;
// -(void)_collectHighLevelTopicsWithText:(id)arg0 bundleId:(id)arg1 addTopic:(id)arg2 weight:(unk)arg3  ;
// -(void)_collectResultsFromContextKitWithText:(id)arg0 isPlainText:(BOOL)arg1 bundleId:(id)arg2 language:(id)arg3 useContextKitTopics:(BOOL)arg4 useContextKitNamedEntities:(BOOL)arg5 addTopic:(id)arg6 addNamedEntity:(unk)arg7 weight:(id)arg8  ;


@end


#endif
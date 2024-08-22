// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGTOPICDISSECTOR_H
#define SGTOPICDISSECTOR_H

@class CKContextClient, PPTextToTopicTransform, NSString;
@protocol SGMailMessageProcessing;


#import "SGPipelineDissector.h"

@interface SGTopicDissector : SGPipelineDissector <SGMailMessageProcessing>

 {
    CKContextClient *_contextClient;
    PPTextToTopicTransform *_transform;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)extractionsFromContextKitWithText:(id)arg0 isPlainText:(BOOL)arg1 bundleId:(id)arg2 language:(id)arg3 weight:(CGFloat)arg4 ;
-(id)init;
-(id)initWithContextClient:(id)arg0 ;
-(id)topicsInText:(id)arg0 isPlainText:(BOOL)arg1 source:(id)arg2 cloudSync:(BOOL)arg3 language:(id)arg4 topicAlgorithms:(id)arg5 namedEntityAlgorithms:(id)arg6 weight:(CGFloat)arg7 ;
// -(void)_collectHighLevelTopicsWithText:(id)arg0 bundleId:(id)arg1 addTopic:(id)arg2 weight:(unk)arg3  ;
// -(void)_collectResultsFromContextKitWithText:(id)arg0 isPlainText:(BOOL)arg1 bundleId:(id)arg2 language:(id)arg3 useContextKitTopics:(BOOL)arg4 useContextKitNamedEntities:(BOOL)arg5 addTopic:(id)arg6 addNamedEntity:(unk)arg7 weight:(id)arg8  ;
-(void)dissectMailMessage:(id)arg0 entity:(id)arg1 context:(id)arg2 ;


@end


#endif
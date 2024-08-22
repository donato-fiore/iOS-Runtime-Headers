// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UPUSOSERIALIZER_H
#define UPUSOSERIALIZER_H


#import <Foundation/Foundation.h>


@interface UPUsoSerializer : NSObject {
    shared_ptr<siri::ontology::UsoVocabManager> _usoVocabManager;
}




+(id)_convertBundleIdToEntity:(id)arg0 ;
+(id)_groupHigherLevelEntities:(id)arg0 ;
+(id)_intermediateNodeRepresentations:(struct vector<std::pair<std::reference_wrapper<siri::ontology::UsoGraphNode>, std::reference_wrapper<const siri::ontology::UsoGraphEdge>>, std::allocator<std::pair<std::reference_wrapper<siri::ontology::UsoGraphNode>, std::reference_wrapper<const siri::ontology::UsoGraphEdge>>>> )arg0 ;
+(id)_leafNodeFromGraphEdge:(*void)arg0 andGraphNode:(struct UsoGraphNode *)arg1 ;
+(id)_leafNodeFromLabel:(id)arg0 andGraphSemanticValueNode:(*void)arg1 ;
+(id)_leafNodeFromLabel:(id)arg0 andGraphStringNode:(*void)arg1 ;
-(id)deserializeFromSerializedGraph:(id)arg0 ;
-(id)init;
-(id)serializeFromIntent:(id)arg0 andEntities:(id)arg1 forBundleId:(id)arg2 ;
-(void)_addPathForLabel:(id)arg0 range:(struct _NSRange )arg1 text:(id)arg2 semanticValue:(id)arg3 sharedEntityGraph:(id)arg4 toGraphNode:(struct UsoGraphNode *)arg5 forGraph:(*void)arg6 ;
-(void)_attachSharedEntity:(id)arg0 withCustomEntityEdge:(*void)arg1 toGraphNode:(struct UsoGraphNode *)arg2 forGraph:(*void)arg3 ;
-(void)_insertHigherLevelEntities:(id)arg0 intoGraph:(*void)arg1 underTaskNode:(struct UsoGraphNode *)arg2 ;
-(void)_insertSimpleEntity:(id)arg0 intoGraph:(*void)arg1 underTaskNode:(struct UsoGraphNode *)arg2 ;


@end


#endif
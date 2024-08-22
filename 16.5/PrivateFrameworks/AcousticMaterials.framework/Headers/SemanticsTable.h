// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEMANTICSTABLE_H
#define SEMANTICSTABLE_H


#import <Foundation/Foundation.h>


@interface SemanticsTable : NSObject {
    unordered_map<semantic_pair, materialsForPair, std::hash<semantic_pair>, std::equal_to<semantic_pair>, std::allocator<std::pair<const semantic_pair, materialsForPair>>> _SemanticsMap;
    unordered_map<NSString *, long long, std::hash<NSString *>, std::equal_to<NSString *>, std::allocator<std::pair<NSString *const, long long>>> _MeshMaterialMap;
    unordered_map<NSString *, long long, std::hash<NSString *>, std::equal_to<NSString *>, std::allocator<std::pair<NSString *const, long long>>> _MeshClassificationMap;
}


@property ? MeshClassificationMap;
@property ? MeshMaterialMap;
@property ? SemanticsMap;


-(BOOL)getARMeshClassificationID:(id)arg0 ARMeshClassificationID:(*NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)getARMeshMaterialID:(id)arg0 ARMeshMaterialID:(*NSInteger)arg1 error:(*id)arg2 ;
-(id)labelsForSemanticType:(id)arg0 error:(*id)arg1 ;
-(struct materialsForPair *)getMaterialsForPair:(struct semantic_pair *)arg0 error:(*id)arg1 ;
-(void)readTable:(*id)arg0 ;


@end


#endif
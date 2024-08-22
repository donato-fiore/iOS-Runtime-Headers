// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GTMESHDATA_H
#define GTMESHDATA_H

@class NSMutableDictionary, NSURL, NSDictionary;

#import <Foundation/Foundation.h>

#import "GTSubmeshData.h"

@interface GTMeshData : NSObject {
    NSMutableDictionary *_submeshes;
    GTSubmeshData *_currentSubmesh;
    vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> _positions;
    vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> _normals;
    vector<GTVertexData, std::allocator<GTVertexData>> _vertices;
    unordered_map<GTVertexData, unsigned int, std::hash<GTVertexData>, std::equal_to<GTVertexData>, std::allocator<std::pair<const GTVertexData, unsigned int>>> _vertexMap;
    NSURL *_objUrl;
}


@property (readonly, nonatomic) NSDictionary *submeshes;
@property (readonly, nonatomic) NSUInteger vertexCount;
@property (readonly, nonatomic) *GTVertexData vertexData;


-(BOOL)parseMaterialFile:(id)arg0 error:(*id)arg1 ;
-(BOOL)parseOBJFileWith:(*id)arg0 ;
-(BOOL)readLine:(id)arg0 error:(*id)arg1 ;
-(id)initWithURL:(id)arg0 error:(*id)arg1 ;
-(unsigned int)findIndexOrPushVertex:(struct GTVertexData *)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAUIBADGEMODEL_H
#define AAUIBADGEMODEL_H


#import <Foundation/Foundation.h>


@interface AAUIBadgeModel : NSObject

@property (nonatomic) int groupCount; // ivar: _groupCount
@property (nonatomic) *int groups; // ivar: _groups
@property (nonatomic) int indexCount; // ivar: _indexCount
@property (nonatomic) *unsigned int indices; // ivar: _indices
@property (nonatomic) *int materials; // ivar: _materials
@property (nonatomic) int vertexCount; // ivar: _vertexCount
@property (nonatomic) *? vertices; // ivar: _vertices


-(?)_loadModelAtPath:(?)arg0 intoVertices:(?)arg1 indices:(?)arg2 groups:(?)arg3 materials:(?)arg4 vertexCount:(?)arg5 indexCountgroupCount;
-(id)initWithPath:(id)arg0 ;
-(void)dealloc;


@end


#endif
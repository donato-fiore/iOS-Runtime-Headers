// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLRENDERPIPELINEFUNCTIONSDESCRIPTOR_H
#define MTLRENDERPIPELINEFUNCTIONSDESCRIPTOR_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTLRenderPipelineFunctionsDescriptor : NSObject <NSCopying>



@property (copy, nonatomic) NSArray *fragmentAdditionalBinaryFunctions; // ivar: _fragmentAdditionalBinaryFunctions
@property (copy, nonatomic) NSArray *tileAdditionalBinaryFunctions; // ivar: _tileAdditionalBinaryFunctions
@property (copy, nonatomic) NSArray *vertexAdditionalBinaryFunctions; // ivar: _vertexAdditionalBinaryFunctions


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif
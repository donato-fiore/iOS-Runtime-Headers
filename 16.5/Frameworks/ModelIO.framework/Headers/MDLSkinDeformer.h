// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MDLSKINDEFORMER_H
#define MDLSKINDEFORMER_H

@class NSString, NSData, NSArray;
@protocol NSCopying, MDLSkinDeformerComponent;

#import <Foundation/Foundation.h>


@interface MDLSkinDeformer : NSObject <NSCopying, MDLSkinDeformerComponent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jointBindTransforms; // ivar: _jointBindTransforms
@property (readonly, nonatomic) NSArray *jointPaths; // ivar: _jointPaths
@property (readonly, nonatomic) ? meshBindTransform; // ivar: _meshBindTransform
@property (readonly) Class superclass;


-(NSUInteger)copyJointBindTransformsInto:(struct ? *)arg0 maxCount:(NSUInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithJointPaths:(id)arg0 jointBindTransforms:(id)arg1 meshBindTransform:(struct ? )arg2 ;
-(id)initWithJointPaths:(id)arg0 jointBindTransforms:(struct ? *)arg1 count:(NSUInteger)arg2 meshBindTransform:(struct ? )arg3 ;


@end


#endif
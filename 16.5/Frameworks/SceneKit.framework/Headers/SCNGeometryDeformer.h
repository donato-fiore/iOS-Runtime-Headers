// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCNGEOMETRYDEFORMER_H
#define SCNGEOMETRYDEFORMER_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SCNGeometryDeformer : NSObject <NSSecureCoding>





+(BOOL)supportsDeformingNormals;
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)instanciateForNode:(id)arg0 withContext:(id)arg1 computeVertexCount:(NSUInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
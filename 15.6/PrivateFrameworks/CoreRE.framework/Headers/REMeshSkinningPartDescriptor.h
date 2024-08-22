// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMESHSKINNINGPARTDESCRIPTOR_H
#define REMESHSKINNINGPARTDESCRIPTOR_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface REMeshSkinningPartDescriptor : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDictionary *attributes; // ivar: _attributes
@property (readonly, nonatomic) unsigned int skeletonIndex; // ivar: _skeletonIndex


+(BOOL)supportsSecureCoding;
-(BOOL)validateWithPayloadSize:(NSUInteger)arg0 skeletonCount:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSkeletonIndex:(unsigned int)arg0 attributes:(id)arg1 ;
-(id)initWithSkinningPartPayload:(*void)arg0 payloadBuilder:(*void)arg1 ;
-(void)addToSkinningModelBuilder:(struct SkinningModelBuilder *)arg0 payloadBuffer:(struct Buffer *)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
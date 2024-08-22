// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MDLVERTEXDESCRIPTOR_H
#define MDLVERTEXDESCRIPTOR_H

@class NSMutableArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MDLVertexDescriptor : NSObject <NSCopying>



@property (retain, nonatomic) NSMutableArray *attributes; // ivar: _attributes
@property (retain, nonatomic) NSMutableArray *layouts; // ivar: _layouts


+(id)_decodeVertexDescriptorAttributesWithCoder:(id)arg0 ;
+(id)_decodeVertexDescriptorLayoutsWithCoder:(id)arg0 ;
+(id)decodeVertexDescriptorWithCoder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeNamed:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithVertexDescriptor:(id)arg0 ;
-(void)_encodeVertexDescriptorAttributesWithCoder:(id)arg0 ;
-(void)_encodeVertexDescriptorLayoutsWithCoder:(id)arg0 ;
-(void)addOrReplaceAttribute:(id)arg0 ;
-(void)debugPrintToFile:(struct __sFILE *)arg0 ;
-(void)encodeVertexDescriptorWithCoder:(id)arg0 ;
-(void)removeAttributeNamed:(id)arg0 ;
-(void)reset;
-(void)setPackedOffsets;
-(void)setPackedStrides;


@end


#endif
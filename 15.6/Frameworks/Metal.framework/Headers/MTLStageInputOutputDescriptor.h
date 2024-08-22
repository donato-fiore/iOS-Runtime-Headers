// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLSTAGEINPUTOUTPUTDESCRIPTOR_H
#define MTLSTAGEINPUTOUTPUTDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MTLAttributeDescriptorArray.h"
#import "MTLBufferLayoutDescriptorArray.h"

@interface MTLStageInputOutputDescriptor : NSObject <NSCopying>



@property (readonly) MTLAttributeDescriptorArray *attributes;
@property (nonatomic) NSUInteger indexBufferIndex;
@property (nonatomic) NSUInteger indexType;
@property (readonly) MTLBufferLayoutDescriptorArray *layouts;


+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)stageInputOutputDescriptor;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(void)reset;


@end


#endif
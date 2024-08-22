// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLVERTEXBUFFERLAYOUTDESCRIPTOR_H
#define MTLVERTEXBUFFERLAYOUTDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTLVertexBufferLayoutDescriptor : NSObject <NSCopying>



@property (nonatomic) NSUInteger stepFunction;
@property (nonatomic) NSUInteger stepRate;
@property (nonatomic) NSUInteger stride;


+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif
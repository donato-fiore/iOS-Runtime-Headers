// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MDLVERTEXBUFFERLAYOUT_H
#define MDLVERTEXBUFFERLAYOUT_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MDLVertexBufferLayout : NSObject <NSCopying>



@property (nonatomic) NSUInteger stride; // ivar: _stride


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithStride:(NSUInteger)arg0 ;


@end


#endif
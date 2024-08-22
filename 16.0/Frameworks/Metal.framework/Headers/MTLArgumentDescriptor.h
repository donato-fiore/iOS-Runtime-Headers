// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLARGUMENTDESCRIPTOR_H
#define MTLARGUMENTDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTLArgumentDescriptor : NSObject <NSCopying>



@property (nonatomic) NSUInteger access;
@property (nonatomic) NSUInteger arrayLength;
@property (nonatomic) NSUInteger constantBlockAlignment;
@property (nonatomic) NSUInteger dataType;
@property (nonatomic) NSUInteger index;
@property (nonatomic) NSUInteger textureType;


+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)argumentDescriptor;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif
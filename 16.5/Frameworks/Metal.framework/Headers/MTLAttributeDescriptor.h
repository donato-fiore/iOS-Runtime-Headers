// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLATTRIBUTEDESCRIPTOR_H
#define MTLATTRIBUTEDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTLAttributeDescriptor : NSObject <NSCopying>



@property (nonatomic) NSUInteger bufferIndex;
@property (nonatomic) NSUInteger format;
@property (nonatomic) NSUInteger offset;


+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif
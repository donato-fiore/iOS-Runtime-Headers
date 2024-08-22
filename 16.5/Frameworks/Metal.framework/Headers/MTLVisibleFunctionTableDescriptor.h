// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLVISIBLEFUNCTIONTABLEDESCRIPTOR_H
#define MTLVISIBLEFUNCTIONTABLEDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTLVisibleFunctionTableDescriptor : NSObject <NSCopying>



@property (nonatomic) BOOL forceResourceIndex;
@property (nonatomic) NSUInteger functionCount;
@property (nonatomic) NSUInteger resourceIndex;


+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)visibleFunctionTableDescriptor;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)reset;


@end


#endif
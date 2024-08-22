// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLINTERSECTIONFUNCTIONTABLEDESCRIPTOR_H
#define MTLINTERSECTIONFUNCTIONTABLEDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTLIntersectionFunctionTableDescriptor : NSObject <NSCopying>



@property (nonatomic) BOOL forceResourceIndex;
@property (nonatomic) NSUInteger functionCount;
@property (nonatomic) NSUInteger resourceIndex;


+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)intersectionFunctionTableDescriptor;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)reset;


@end


#endif
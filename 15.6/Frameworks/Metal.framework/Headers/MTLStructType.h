// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLSTRUCTTYPE_H
#define MTLSTRUCTTYPE_H

@class NSArray;


#import "MTLType.h"

@interface MTLStructType : MTLType

@property (readonly) NSArray *members;


+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(id)memberByName:(id)arg0 ;


@end


#endif
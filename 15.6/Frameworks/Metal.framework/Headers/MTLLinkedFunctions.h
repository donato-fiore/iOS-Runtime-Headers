// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLLINKEDFUNCTIONS_H
#define MTLLINKEDFUNCTIONS_H

@class NSArray, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTLLinkedFunctions : NSObject <NSCopying>



@property (copy, nonatomic) NSArray *binaryFunctions;
@property (copy, nonatomic) NSArray *functions;
@property (copy, nonatomic) NSDictionary *groups;
@property (copy, nonatomic) NSArray *privateFunctions; // ivar: _privateFunctions


+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)linkedFunctions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)reset;


@end


#endif
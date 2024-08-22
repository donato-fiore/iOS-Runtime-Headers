// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSBLOCK_H
#define NSBLOCK_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NSBlock : NSObject <NSCopying>





+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(void)invoke;
-(void)performAfterDelay:(CGFloat)arg0 ;


@end


#endif
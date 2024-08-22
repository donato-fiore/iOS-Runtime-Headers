// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBPROCESSAPPNAPSTATE_H
#define RBPROCESSAPPNAPSTATE_H

@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface RBProcessAppNapState : NSObject <NSCopying, NSMutableCopying>





-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithProcessAppNapState:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(unsigned short)encodedState;
-(void)dealloc;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIFOCUSEFFECT_H
#define UIFOCUSEFFECT_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface UIFocusEffect : NSObject <NSCopying>



@property (readonly, nonatomic) BOOL _isDefaultEffect; // ivar: __isDefaultEffect


+(id)effect;
-(BOOL)__isHaloEffect;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif
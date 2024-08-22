// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIPOINTERACCESSORY_H
#define UIPOINTERACCESSORY_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "UIPointerShape.h"

@interface UIPointerAccessory : NSObject <NSCopying>



@property (nonatomic) BOOL orientationMatchesAngle; // ivar: _orientationMatchesAngle
@property (nonatomic) ? position; // ivar: _position
@property (copy, nonatomic) UIPointerShape *shape; // ivar: _shape


+(id)accessoryWithShape:(id)arg0 position:(struct ? )arg1 ;
+(id)arrowAccessoryWithPosition:(struct ? )arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif
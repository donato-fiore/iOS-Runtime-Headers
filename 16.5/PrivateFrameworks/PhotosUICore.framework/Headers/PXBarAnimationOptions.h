// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXBARANIMATIONOPTIONS_H
#define PXBARANIMATIONOPTIONS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PXBarAnimationOptions : NSObject <NSCopying>



@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) NSInteger type; // ivar: _type


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithType:(NSInteger)arg0 ;
-(id)initWithType:(NSInteger)arg0 duration:(CGFloat)arg1 ;


@end


#endif
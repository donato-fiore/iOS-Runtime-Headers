// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIFLOATINGMOTIONCONFIGURATION_H
#define _UIFLOATINGMOTIONCONFIGURATION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _UIFloatingMotionConfiguration : NSObject <NSCopying>



@property (readonly, nonatomic) CGPoint rotation; // ivar: _rotation
@property (readonly, nonatomic) CGPoint translation; // ivar: _translation


+(id)configurationWithLargeTranslationOnAxis:(NSUInteger)arg0 ;
+(id)configurationWithRotation:(struct CGPoint )arg0 ;
+(id)configurationWithRotationOnAxis:(NSUInteger)arg0 ;
+(id)configurationWithTranslation:(struct CGPoint )arg0 ;
+(id)configurationWithTranslationOnAxis:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithTranslation:(struct CGPoint )arg0 rotation:(struct CGPoint )arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif
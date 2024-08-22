// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFTRAITSSETTINGSORIENTATION_H
#define SBFTRAITSSETTINGSORIENTATION_H

@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface SBFTraitsSettingsOrientation : NSObject <NSCopying, NSMutableCopying>



@property (nonatomic) NSInteger orientation; // ivar: _orientation


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToOrientationSettings:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithOrientation:(NSInteger)arg0 ;
-(id)initWithOrientationSettings:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKACTIVITYMOVEMODEOBJECT_H
#define HKACTIVITYMOVEMODEOBJECT_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKActivityMoveModeObject : NSObject <NSCopying, NSSecureCoding>



@property (readonly) NSInteger activityMoveMode; // ivar: _activityMoveMode


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithActivityMoveMode:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
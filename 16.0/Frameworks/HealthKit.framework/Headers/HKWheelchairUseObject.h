// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKWHEELCHAIRUSEOBJECT_H
#define HKWHEELCHAIRUSEOBJECT_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKWheelchairUseObject : NSObject <NSCopying, NSSecureCoding>



@property (readonly) NSInteger wheelchairUse; // ivar: _wheelchairUse


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithWheelchairUse:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
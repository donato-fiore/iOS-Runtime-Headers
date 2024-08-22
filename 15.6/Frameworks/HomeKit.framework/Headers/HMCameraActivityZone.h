// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMCAMERAACTIVITYZONE_H
#define HMCAMERAACTIVITYZONE_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HMCameraActivityZone : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy) NSArray *points; // ivar: _points


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPoints:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
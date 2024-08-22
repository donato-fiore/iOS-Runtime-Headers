// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSDURATIONATTRIBUTE_H
#define BLSDURATIONATTRIBUTE_H

@class NSString;
@protocol BSXPCCoding;


#import "BLSAttribute.h"

@interface BLSDurationAttribute : BLSAttribute <BSXPCCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)cancelAfterInterval:(CGFloat)arg0 ;
+(id)timeoutAfterInterval:(CGFloat)arg0 ;
+(id)warnAfterInterval:(CGFloat)arg0 ;
-(BOOL)canBePaused;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDuration:(CGFloat)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif
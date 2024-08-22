// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSDISPLAYMODESETTINGS_H
#define SBSDISPLAYMODESETTINGS_H

@protocol NSSecureCoding, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface SBSDisplayModeSettings : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>



@property (readonly, nonatomic) NSInteger overscanCompensation; // ivar: _overscanCompensation
@property (readonly, nonatomic) NSUInteger scale; // ivar: _scale


+(BOOL)supportsSecureCoding;
+(id)fromDefaultsRepresentation:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)defaultsRepresentation;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithScale:(NSUInteger)arg0 overscanCompensation:(NSInteger)arg1 ;
-(id)initWithSettings:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
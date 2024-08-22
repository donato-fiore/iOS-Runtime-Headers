// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMFVERSION_H
#define HMFVERSION_H

@class NSString;
@protocol HMFLocalizable, NSCopying, NSSecureCoding;


#import "HMFObject.h"

@interface HMFVersion : HMFObject <HMFLocalizable, NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *localizedDescription;
@property (readonly) NSUInteger majorVersion; // ivar: _majorVersion
@property (readonly) NSUInteger minorVersion; // ivar: _minorVersion
@property (readonly) NSUInteger updateVersion; // ivar: _updateVersion
@property (readonly, copy) NSString *versionString;


+(BOOL)supportsSecureCoding;
-(BOOL)isAtLeastVersion:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToVersion:(id)arg0 ;
-(BOOL)isGreaterThanVersion:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMajorVersion:(NSUInteger)arg0 minorVersion:(NSUInteger)arg1 updateVersion:(NSUInteger)arg2 ;
-(id)initWithVersionString:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
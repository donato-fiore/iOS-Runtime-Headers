// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CARPFVERSION_H
#define CARPFVERSION_H

@class NSString;
@protocol CARPFLocalizable, NSCopying, NSSecureCoding;


#import "CARPFObject.h"

@interface CARPFVersion : CARPFObject <CARPFLocalizable, NSCopying, NSSecureCoding>



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
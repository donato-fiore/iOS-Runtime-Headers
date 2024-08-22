// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKFHIRVERSION_H
#define HKFHIRVERSION_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKFHIRVersion : NSObject <NSCopying, NSSecureCoding>

 {
    NSString *_invalidVersionString;
}


@property (readonly, nonatomic) NSString *FHIRRelease;
@property (readonly, nonatomic) NSInteger majorVersion; // ivar: _majorVersion
@property (readonly, nonatomic) NSInteger minorVersion; // ivar: _minorVersion
@property (readonly, nonatomic) NSInteger patchVersion; // ivar: _patchVersion
@property (readonly, copy, nonatomic) NSString *stringRepresentation;


+(BOOL)supportsSecureCoding;
+(id)primaryDSTU2Version;
+(id)primaryR4Version;
+(id)versionFromVersionString:(id)arg0 ;
+(id)versionFromVersionString:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInvalidVersionString:(id)arg0 ;
-(id)initWithSemanticVersion:(struct ? )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
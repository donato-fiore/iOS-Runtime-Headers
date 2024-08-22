// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCVERSION_H
#define GCVERSION_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GCVersion : NSObject <NSCopying, NSSecureCoding>



@property (readonly) NSUInteger major; // ivar: _major
@property (readonly) NSUInteger minor; // ivar: _minor
@property (readonly) NSUInteger patch; // ivar: _patch


+(BOOL)supportsSecureCoding;
+(id)currentSourceVersion;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualTo:(id)arg0 ;
-(BOOL)isEqualToSourceVersion:(id)arg0 ;
-(BOOL)isGreaterThan:(id)arg0 ;
-(BOOL)isGreaterThanOrEqualTo:(id)arg0 ;
-(BOOL)isGreaterThanOrEqualToSourceVersion:(id)arg0 ;
-(BOOL)isGreaterThanSourceVersion:(id)arg0 ;
-(BOOL)isLessThan:(id)arg0 ;
-(BOOL)isLessThanOrEqualTo:(id)arg0 ;
-(BOOL)isLessThanOrEqualToSourceVersion:(id)arg0 ;
-(BOOL)isLessThanSourceVersion:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMajor:(NSUInteger)arg0 minor:(NSUInteger)arg1 patch:(NSUInteger)arg2 ;
-(id)initWithString:(id)arg0 ;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
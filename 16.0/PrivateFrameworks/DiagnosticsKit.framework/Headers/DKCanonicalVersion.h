// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DKCANONICALVERSION_H
#define DKCANONICALVERSION_H

@class NSArray, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DKCanonicalVersion : NSObject <NSCopying, NSSecureCoding>



@property (retain) NSArray *parts; // ivar: _parts
@property (readonly, nonatomic) NSString *string; // ivar: _string


+(BOOL)supportsSecureCoding;
+(id)canonicalVersionWithString:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCanonicalVersion:(id)arg0 ;
-(BOOL)isNewerThan:(id)arg0 ;
-(NSUInteger)hash;
-(id)_parseParts:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithString:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
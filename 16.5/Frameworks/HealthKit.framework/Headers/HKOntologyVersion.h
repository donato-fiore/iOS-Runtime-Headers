// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKONTOLOGYVERSION_H
#define HKONTOLOGYVERSION_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKOntologyVersion : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *string; // ivar: _string


+(BOOL)supportsSecureCoding;
-(BOOL)isEmptyVersion;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initEmptyVersion;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithShardEntries:(id)arg0 ;
-(id)initWithString:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
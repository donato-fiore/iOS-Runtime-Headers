// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PRTRUSTEDCONTACT_H
#define PRTRUSTEDCONTACT_H

@class NSData;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PRTrustedContact : NSObject <NSSecureCoding, NSCopying>



@property (readonly) NSData *contactKey; // ivar: _contactKey


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContactKey:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
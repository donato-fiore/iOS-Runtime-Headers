// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSUUID_H
#define NSUUID_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface NSUUID : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *UUIDString;


+(BOOL)supportsSecureCoding;
+(id)UUID;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(Class)classForCoder;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUIDBytes:(unsigned char)arg0 ;
-(id)initWithUUIDString:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getUUIDBytes:(unsigned char)arg0 ;


@end


#endif
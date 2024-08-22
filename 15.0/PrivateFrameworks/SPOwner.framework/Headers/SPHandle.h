// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPHANDLE_H
#define SPHANDLE_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPHandle : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *destination; // ivar: _destination
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)handleWithEmailAddress:(id)arg0 ;
+(id)handleWithPhoneNumber:(id)arg0 ;
+(id)handleWithString:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 destination:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
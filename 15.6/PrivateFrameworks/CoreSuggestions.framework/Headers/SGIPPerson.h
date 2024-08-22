// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGIPPERSON_H
#define SGIPPERSON_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SGIPPerson : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSString *handle; // ivar: _handle
@property (retain, nonatomic) NSString *handleType; // ivar: _handleType
@property (retain, nonatomic) NSString *name; // ivar: _name


+(BOOL)supportsSecureCoding;
+(id)personWithIPPerson:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPerson:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
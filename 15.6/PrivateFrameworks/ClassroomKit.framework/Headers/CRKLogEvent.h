// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKLOGEVENT_H
#define CRKLOGEVENT_H

@class NSDate, NSString, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CRKLogEvent : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToEvent:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 date:(id)arg1 userInfo:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
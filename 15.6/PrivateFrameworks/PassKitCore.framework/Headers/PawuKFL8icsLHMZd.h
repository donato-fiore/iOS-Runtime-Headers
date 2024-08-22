// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PAWUKFL8ICSLHMZD_H
#define PAWUKFL8ICSLHMZD_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PawuKFL8icsLHMZd : NSObject

@property (retain, nonatomic) NSString *emailAddress; // ivar: _emailAddress
@property (retain, nonatomic) NSString *firstName; // ivar: _firstName
@property (retain, nonatomic) NSString *fullName; // ivar: _fullName
@property (retain, nonatomic) NSString *lastName; // ivar: _lastName
@property (retain, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber
@property (nonatomic) NSUInteger source; // ivar: _source
@property (nonatomic) NSUInteger type; // ivar: _type


-(id)initWithEmailAddress:(id)arg0 source:(NSUInteger)arg1 ;
-(id)initWithFirstName:(id)arg0 lastName:(id)arg1 source:(NSUInteger)arg2 ;
-(id)initWithFullName:(id)arg0 source:(NSUInteger)arg1 ;
-(id)initWithPhoneNumber:(id)arg0 source:(NSUInteger)arg1 ;
-(id)initWithSource:(NSUInteger)arg0 ;


@end


#endif
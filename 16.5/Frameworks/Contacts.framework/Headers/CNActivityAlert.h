// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNACTIVITYALERT_H
#define CNACTIVITYALERT_H

@class NSString, NSDictionary;
@protocol CNObjectValidation, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CNActivityAlert : NSObject <CNObjectValidation, NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoreMute; // ivar: _ignoreMute
@property (copy, nonatomic) NSString *sound; // ivar: _sound
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo
@property (copy, nonatomic) NSString *vibration; // ivar: _vibration


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValid:(*id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSound:(id)arg0 vibration:(id)arg1 ignoreMute:(BOOL)arg2 ;
-(id)initWithSound:(id)arg0 vibration:(id)arg1 ignoreMute:(BOOL)arg2 userInfo:(id)arg3 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
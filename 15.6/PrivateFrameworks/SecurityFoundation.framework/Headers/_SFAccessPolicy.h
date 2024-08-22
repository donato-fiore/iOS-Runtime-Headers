// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFACCESSPOLICY_H
#define _SFACCESSPOLICY_H

@class NSArray, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _SFAccessPolicy : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSArray *accessControlList; // ivar: _accessControlList
@property (copy, nonatomic) NSString *accessGroup; // ivar: _accessGroup
@property (nonatomic) ? accessibility; // ivar: _accessibility
@property (readonly, nonatomic) *__CFDictionary secAccessibilityAttributes;
@property (nonatomic) NSInteger sharingPolicy; // ivar: _sharingPolicy


+(BOOL)supportsSecureCoding;
+(id)accessPolicyWithSecAccessibility:(struct __CFString *)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithAccessibility:(struct ? )arg0 sharingPolicy:(NSInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
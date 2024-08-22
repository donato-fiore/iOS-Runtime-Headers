// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKOBJECTAUTHORIZATIONPROMPTSESSION_H
#define HKOBJECTAUTHORIZATIONPROMPTSESSION_H

@class NSString, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKObjectAuthorizationPromptSession : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy, nonatomic) NSUUID *sessionIdentifier; // ivar: _sessionIdentifier


+(BOOL)supportsSecureCoding;
-(id)initForBundleIdentifier:(id)arg0 sessionIdentifier:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
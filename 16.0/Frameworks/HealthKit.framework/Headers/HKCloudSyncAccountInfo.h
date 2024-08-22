// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCLOUDSYNCACCOUNTINFO_H
#define HKCLOUDSYNCACCOUNTINFO_H

@class NSString, NSPersonNameComponents;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKCloudSyncAccountInfo : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger accountSettings; // ivar: _accountSettings
@property (readonly, copy, nonatomic) NSString *emailAddress; // ivar: _emailAddress
@property (readonly, copy, nonatomic) NSPersonNameComponents *fullName; // ivar: _fullName


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFullName:(id)arg0 emailAddress:(id)arg1 accountSettings:(NSUInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
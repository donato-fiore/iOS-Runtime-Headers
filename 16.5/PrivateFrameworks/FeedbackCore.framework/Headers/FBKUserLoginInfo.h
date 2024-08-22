// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBKUSERLOGININFO_H
#define FBKUSERLOGININFO_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>

#import "FBKCustomBehavior.h"

@interface FBKUserLoginInfo : NSObject

@property (retain, nonatomic) FBKCustomBehavior *behavior; // ivar: _behavior
@property (retain, nonatomic) NSString *deviceToken; // ivar: _deviceToken
@property (retain, nonatomic) NSString *familyName; // ivar: _familyName
@property (retain, nonatomic) NSString *givenName; // ivar: _givenName
@property (nonatomic) BOOL isSystemAccount; // ivar: _isSystemAccount
@property (retain, nonatomic) NSNumber *participantID; // ivar: _participantID
@property (retain, nonatomic) NSString *username; // ivar: _username


-(id)description;
-(id)initWithDictionary:(id)arg0 ;
-(void)saveDeviceTokenLookupInformation;


@end


#endif
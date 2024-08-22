// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLMESSAGEPARTY_H
#define WLMESSAGEPARTY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WLMessageParty : NSObject

@property (readonly, nonatomic) NSString *address; // ivar: _address
@property (readonly, nonatomic) NSString *ccAcNumber; // ivar: _ccAcNumber
@property (readonly, nonatomic) NSString *icc; // ivar: _icc
@property (readonly, nonatomic) BOOL isPhoneNumber; // ivar: _isPhoneNumber
@property (readonly, nonatomic) NSString *np; // ivar: _np


+(id)_guessIccForNumber:(id)arg0 ;
-(id)_initWithAddress:(id)arg0 addCountryCode:(BOOL)arg1 sqlController:(id)arg2 ;
-(id)description;


@end


#endif
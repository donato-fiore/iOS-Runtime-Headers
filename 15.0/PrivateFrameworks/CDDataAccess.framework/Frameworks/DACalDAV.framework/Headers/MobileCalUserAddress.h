// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MOBILECALUSERADDRESS_H
#define MOBILECALUSERADDRESS_H

@class NSURL;

#import <Foundation/Foundation.h>

#import "MobileCalDAVAccount.h"

@interface MobileCalUserAddress : NSObject

@property (weak, nonatomic) MobileCalDAVAccount *account; // ivar: _account
@property (copy, nonatomic) NSURL *address; // ivar: _address


+(id)userAddress:(id)arg0 forAccount:(id)arg1 ;
+(id)userAddressFromDictionaryRepresentation:(id)arg0 forAccount:(id)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithAddress:(id)arg0 account:(id)arg1 ;


@end


#endif
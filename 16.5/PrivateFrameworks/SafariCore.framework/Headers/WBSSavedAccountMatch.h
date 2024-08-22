// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSSAVEDACCOUNTMATCH_H
#define WBSSAVEDACCOUNTMATCH_H

@class NSDate, NSString, NSURLProtectionSpace;

#import <Foundation/Foundation.h>

#import "WBSAutoFillPasskey.h"
#import "WBSSavedAccount.h"

@interface WBSSavedAccountMatch : NSObject

@property (readonly, copy, nonatomic) WBSAutoFillPasskey *autoFillPasskey; // ivar: _autoFillPasskey
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSString *host; // ivar: _host
@property (readonly, nonatomic) NSInteger matchLevel; // ivar: _matchLevel
@property (readonly, nonatomic) NSString *password;
@property (readonly, nonatomic) NSURLProtectionSpace *protectionSpace; // ivar: _protectionSpace
@property (readonly, nonatomic) WBSSavedAccount *savedAccount; // ivar: _savedAccount
@property (readonly, nonatomic) NSString *user;


-(id)completion;
-(id)debugDescription;
-(id)initWithSavedAccount:(id)arg0 protectionSpace:(id)arg1 matchLevel:(NSInteger)arg2 ;
-(id)initWithSavedAccount:(id)arg0 protectionSpace:(id)arg1 matchLevel:(NSInteger)arg2 autoFillPasskey:(id)arg3 ;


@end


#endif
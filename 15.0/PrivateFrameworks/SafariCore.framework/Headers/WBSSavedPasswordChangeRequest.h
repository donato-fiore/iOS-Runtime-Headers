// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSSAVEDPASSWORDCHANGEREQUEST_H
#define WBSSAVEDPASSWORDCHANGEREQUEST_H

@class NSString, NSMutableArray, NSArray;

#import <Foundation/Foundation.h>

#import "WBSSavedPassword.h"
#import "WBSTOTPGenerator.h"

@interface WBSSavedPasswordChangeRequest : NSObject

@property (readonly, nonatomic) BOOL hasChanges;
@property (readonly, nonatomic) BOOL hasTOTPGeneratorChange;
@property (readonly, nonatomic) BOOL hasUserChange;
@property (copy, nonatomic) NSString *password; // ivar: _password
@property (retain, nonatomic) WBSSavedPassword *savedPassword; // ivar: _savedPassword
@property (retain, nonatomic) NSMutableArray *sites; // ivar: _sites
@property (retain, nonatomic) WBSTOTPGenerator *totpGenerator; // ivar: _totpGenerator
@property (copy, nonatomic) NSString *user; // ivar: _user
@property (readonly, nonatomic) NSArray *userVisibleSites;




@end


#endif
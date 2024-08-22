// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALNMSMAILACCOUNTS_H
#define CALNMSMAILACCOUNTS_H

@class NSString;
@protocol CALNMailAccounts;

#import <Foundation/Foundation.h>


@interface CALNMSMailAccounts : NSObject <CALNMailAccounts>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)canSendMail;


@end


#endif
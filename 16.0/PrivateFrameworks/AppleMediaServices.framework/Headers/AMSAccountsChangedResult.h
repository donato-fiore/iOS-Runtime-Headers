// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSACCOUNTSCHANGEDRESULT_H
#define AMSACCOUNTSCHANGEDRESULT_H

@class ACAccount, NSString;
@protocol AMSHashable;

#import <Foundation/Foundation.h>


@interface AMSAccountsChangedResult : NSObject <AMSHashable>



@property (readonly, nonatomic) ACAccount *account; // ivar: _account
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *hashedDescription;
@property (readonly) Class superclass;


-(id)initWithAccount:(id)arg0 ;


@end


#endif
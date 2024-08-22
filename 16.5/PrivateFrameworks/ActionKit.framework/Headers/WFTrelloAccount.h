// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFTRELLOACCOUNT_H
#define WFTRELLOACCOUNT_H

@class NSString;


#import "WFAccount.h"

@interface WFTrelloAccount : WFAccount

@property (copy, nonatomic) NSString *email; // ivar: _email
@property (copy, nonatomic) NSString *token; // ivar: _token


+(id)accountWithToken:(id)arg0 ;
+(id)localizedServiceName;
+(id)serviceID;
-(BOOL)isValid;
-(id)localizedName;
-(void)refreshWithCompletionHandler:(id)arg0 ;


@end


#endif
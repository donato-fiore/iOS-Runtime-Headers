// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFWORDPRESSACCOUNT_H
#define WFWORDPRESSACCOUNT_H

@class NSURL;


#import "WFPasswordAccount.h"

@interface WFWordPressAccount : WFPasswordAccount

@property (copy, nonatomic) NSURL *endpointURL; // ivar: _endpointURL


+(BOOL)allowsMultipleAccounts;
+(NSUInteger)modelVersion;
+(id)accountWithUsername:(id)arg0 password:(id)arg1 endpointURL:(id)arg2 ;
+(id)localizedServiceName;
+(id)serviceID;
+(void)loginWithUsername:(id)arg0 password:(id)arg1 blogURL:(id)arg2 completionHandler:(id)arg3 ;
-(BOOL)isValid;
-(id)decodeValueForKey:(id)arg0 withCoder:(id)arg1 modelVersion:(NSUInteger)arg2 ;
-(id)localizedName;
-(void)refreshWithCompletionHandler:(id)arg0 ;


@end


#endif
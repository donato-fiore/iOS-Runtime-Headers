// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBKTRANSACTION_H
#define SBKTRANSACTION_H

@class NSString, NSURL, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "SBKRequest.h"

@interface SBKTransaction : NSObject

@property (retain, nonatomic) SBKRequest *activeRequest; // ivar: _activeRequest
@property (readonly, copy, nonatomic) NSString *domain; // ivar: _domain
@property (retain, nonatomic) NSURL *requestURL; // ivar: _requestURL
@property (retain, nonatomic) NSMutableDictionary *userInfo; // ivar: _userInfo


-(id)clampsKey;
-(id)init;
-(id)initWithDomain:(id)arg0 requestURL:(id)arg1 ;
-(id)newRequest;
-(id)transactionContextForKey:(id)arg0 ;
-(void)processDataInResponse:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)setTransactionContext:(id)arg0 forKey:(id)arg1 ;


@end


#endif
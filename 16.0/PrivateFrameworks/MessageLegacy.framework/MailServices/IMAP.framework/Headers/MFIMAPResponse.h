// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFIMAPRESPONSE_H
#define MFIMAPRESPONSE_H

@class NSString, NSDictionary, NSArray;

#import <Foundation/Foundation.h>

#import "MFIMAPResponseConsumer.h"

@interface MFIMAPResponse : NSObject {
    BOOL _responseType;
    NSString *_tag;
    NSDictionary *_keyValuePairs;
    ? _data;
}


@property (copy, nonatomic) NSArray *privateNamespaces;
@property (copy, nonatomic) NSArray *publicNamespaces;
@property (retain, nonatomic) MFIMAPResponseConsumer *responseConsumer; // ivar: _responseConsumer
@property (copy, nonatomic) NSArray *sharedNamespaces;


-(BOOL)isAlertResponse;
-(BOOL)isResponseWithCode:(int)arg0 ;
-(BOOL)isUntagged;
-(NSUInteger)mailboxAttributes;
-(NSUInteger)number;
-(id)capabilities;
-(id)description;
-(id)extraAttributes;
-(id)fetchResultWithType:(int)arg0 ;
-(id)fetchResults;
-(id)flags;
-(id)flagsFetchResult;
-(id)initWithConnection:(id)arg0 responseConsumer:(id)arg1 ;
-(id)initWithString:(id)arg0 ;
-(id)keyValuePairs;
-(id)mailboxName;
-(id)parameters;
-(id)quotaRootName;
-(id)quotaRootNames;
-(id)quotas;
-(id)responseInfo;
-(id)responseName;
-(id)searchResults;
-(id)separator;
-(id)serverInfo;
-(id)statusEntries;
-(id)tag;
-(id)uids;
-(id)userData;
-(id)userString;
-(int)responseCode;
-(int)responseType;
-(int)uidFlagsChange;
-(void)dealloc;
-(void)setCapabilities:(id)arg0 ;
-(void)setFetchResults:(id)arg0 ;
-(void)setFlags:(id)arg0 ;
-(void)setFlagsFetchResult:(id)arg0 ;
-(void)setMailboxAttributes:(NSUInteger)arg0 separator:(id)arg1 mailboxName:(id)arg2 extraAttributes:(id)arg3 ;
-(void)setMailboxName:(id)arg0 quotaRootNames:(id)arg1 ;
-(void)setMailboxName:(id)arg0 statusEntries:(id)arg1 ;
-(void)setNumber:(NSUInteger)arg0 ;
-(void)setQuotaRootName:(id)arg0 quotas:(id)arg1 ;
-(void)setResponseName:(id)arg0 parameters:(id)arg1 ;
-(void)setResponseType:(int)arg0 ;
-(void)setSearchResults:(id)arg0 ;
-(void)setServerInfo:(id)arg0 ;
-(void)setTag:(id)arg0 ;
-(void)setUidFlagsChange:(int)arg0 ;
-(void)setUids:(id)arg0 ;
-(void)setUserData:(id)arg0 responseCode:(int)arg1 responseInfo:(id)arg2 ;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif
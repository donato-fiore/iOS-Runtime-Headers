// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUSCRIPTFACEBOOKSESSION_H
#define SUSCRIPTFACEBOOKSESSION_H



#import "SUScriptObject.h"
#import "SUScriptAppleAccount.h"

@interface SUScriptFacebookSession : SUScriptObject {
    SUScriptAppleAccount *_account;
}


@property (readonly) id *hasAccounts;
@property (readonly) NSUInteger likeStatusFlagFriendCount;
@property (readonly) NSUInteger likeStatusFlagFriends;
@property (readonly) NSUInteger likeStatusFlagGlobalCount;
@property (readonly) NSUInteger likeStatusFlagMe;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(id)_className;
-(id)attributeKeys;
-(id)initWithAppleAccount:(id)arg0 ;
-(id)scriptAttributeKeys;
-(void)dealloc;
-(void)fetchLikeStatusForURL:(id)arg0 flags:(id)arg1 completionFunction:(id)arg2 ;
-(void)likeURL:(id)arg0 completionFunction:(id)arg1 ;
-(void)unlikeURL:(id)arg0 completionFunction:(id)arg1 ;


@end


#endif
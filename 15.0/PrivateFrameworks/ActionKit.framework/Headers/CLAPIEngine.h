// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLAPIENGINE_H
#define CLAPIENGINE_H

@class NSURL, NSString, NSMutableSet;
@protocol CLAPIEngineDelegate;

#import <Foundation/Foundation.h>


@interface CLAPIEngine : NSObject

@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (nonatomic) BOOL clearsCookies; // ivar: _clearsCookies
@property (nonatomic) NSObject<CLAPIEngineDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSString *email; // ivar: _email
@property (copy, nonatomic) NSString *password; // ivar: _password
@property (retain, nonatomic) NSMutableSet *transactions; // ivar: _transactions


+(id)defaultBaseURL;
+(id)engine;
+(id)engineWithDelegate:(id)arg0 ;
+(void)initialize;
-(BOOL)isReady;
-(NSInteger)requestTypeForConnectionIdentifier:(id)arg0 ;
-(id)_URLWithPath:(id)arg0 ;
-(id)_createAndStartConnectionForTransaction:(id)arg0 ;
-(id)_transactionForConnection:(id)arg0 ;
-(id)_transactionForConnectionIdentifier:(id)arg0 ;
-(id)bookmarkLinkWithURL:(id)arg0 name:(id)arg1 options:(id)arg2 userInfo:(id)arg3 ;
-(id)bookmarkLinkWithURL:(id)arg0 name:(id)arg1 userInfo:(id)arg2 ;
-(id)changeNameOfItem:(id)arg0 toName:(id)arg1 userInfo:(id)arg2 ;
-(id)changeNameOfItemAtHref:(id)arg0 toName:(id)arg1 userInfo:(id)arg2 ;
-(id)changePrivacyOfItem:(id)arg0 toPrivate:(BOOL)arg1 userInfo:(id)arg2 ;
-(id)changePrivacyOfItemAtHref:(id)arg0 toPrivate:(BOOL)arg1 userInfo:(id)arg2 ;
-(id)createAccountWithEmail:(id)arg0 password:(id)arg1 acceptTerms:(BOOL)arg2 userInfo:(id)arg3 ;
-(id)deleteItem:(id)arg0 userInfo:(id)arg1 ;
-(id)deleteItemAtHref:(id)arg0 userInfo:(id)arg1 ;
-(id)getAccountInformationWithUserInfo:(id)arg0 ;
-(id)getItemInformation:(id)arg0 userInfo:(id)arg1 ;
-(id)getItemInformationAtURL:(id)arg0 userInfo:(id)arg1 ;
-(id)getItemListStartingAtPage:(NSInteger)arg0 itemsPerPage:(NSInteger)arg1 userInfo:(id)arg2 ;
-(id)getItemListStartingAtPage:(NSInteger)arg0 ofType:(NSInteger)arg1 itemsPerPage:(NSInteger)arg2 showOnlyItemsInTrash:(BOOL)arg3 userInfo:(id)arg4 ;
-(id)getItemListStartingAtPage:(NSInteger)arg0 ofType:(NSInteger)arg1 itemsPerPage:(NSInteger)arg2 userInfo:(id)arg3 ;
-(id)getStoreProductsWithUserInfo:(id)arg0 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(id)redeemStoreReceipt:(id)arg0 userInfo:(id)arg1 ;
-(id)restoreItem:(id)arg0 userInfo:(id)arg1 ;
-(id)restoreItemAtHref:(id)arg0 userInfo:(id)arg1 ;
-(id)uploadFileWithName:(id)arg0 fileData:(id)arg1 fileURL:(id)arg2 options:(id)arg3 userInfo:(id)arg4 ;
-(id)uploadFileWithName:(id)arg0 fileData:(id)arg1 options:(id)arg2 userInfo:(id)arg3 ;
-(id)uploadFileWithName:(id)arg0 fileData:(id)arg1 userInfo:(id)arg2 ;
-(id)uploadFileWithName:(id)arg0 fileURL:(id)arg1 options:(id)arg2 userInfo:(id)arg3 ;
-(id)userInfoForConnectionIdentifier:(id)arg0 ;
-(void)cancelAllConnections;
-(void)cancelConnection:(id)arg0 ;
-(void)connection:(id)arg0 didFailWithError:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveAuthenticationChallenge:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveData:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveResponse:(id)arg1 ;
-(void)connection:(id)arg0 didSendBodyData:(NSInteger)arg1 totalBytesWritten:(NSInteger)arg2 totalBytesExpectedToWrite:(NSInteger)arg3 ;
-(void)connectionDidFinishLoading:(id)arg0 ;
-(void)dealloc;


@end


#endif
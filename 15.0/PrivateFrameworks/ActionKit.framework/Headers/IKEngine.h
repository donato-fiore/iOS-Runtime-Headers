// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IKENGINE_H
#define IKENGINE_H

@class NSMutableDictionary, NSString;
@protocol IKEngineDelegate;

#import <Foundation/Foundation.h>


@interface IKEngine : NSObject {
    NSMutableDictionary *_connections;
}


@property (copy, nonatomic) NSString *OAuthToken; // ivar: _OAuthToken
@property (copy, nonatomic) NSString *OAuthTokenSecret; // ivar: _OAuthTokenSecret
@property (nonatomic) NSObject<IKEngineDelegate> *delegate; // ivar: _delegate


+(void)setOAuthConsumerKey:(id)arg0 andConsumerSecret:(id)arg1 ;
-(NSUInteger)numberOfConnections;
-(id)_signatureWithKey:(id)arg0 baseString:(id)arg1 ;
-(id)_startConnectionWithAPIPath:(id)arg0 bodyArguments:(id)arg1 type:(int)arg2 userInfo:(id)arg3 context:(id)arg4 ;
-(id)addBookmarkWithURL:(id)arg0 title:(id)arg1 description:(id)arg2 folder:(id)arg3 resolveFinalURL:(BOOL)arg4 userInfo:(id)arg5 ;
-(id)addBookmarkWithURL:(id)arg0 userInfo:(id)arg1 ;
-(id)addFolderWithTitle:(id)arg0 userInfo:(id)arg1 ;
-(id)archiveBookmark:(id)arg0 userInfo:(id)arg1 ;
-(id)authTokenForUsername:(id)arg0 password:(id)arg1 userInfo:(id)arg2 ;
-(id)bookmarksInFolder:(id)arg0 limit:(NSUInteger)arg1 existingBookmarks:(id)arg2 userInfo:(id)arg3 ;
-(id)bookmarksWithUserInfo:(id)arg0 ;
-(id)connectionForIdentifier:(id)arg0 ;
-(id)deleteBookmark:(id)arg0 userInfo:(id)arg1 ;
-(id)deleteFolder:(id)arg0 userInfo:(id)arg1 ;
-(id)foldersWithUserInfo:(id)arg0 ;
-(id)identifierForConnection:(id)arg0 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(id)moveBookmark:(id)arg0 toFolder:(id)arg1 userInfo:(id)arg2 ;
-(id)orderFolders:(id)arg0 userInfo:(id)arg1 ;
-(id)starBookmark:(id)arg0 userInfo:(id)arg1 ;
-(id)textOfBookmark:(id)arg0 userInfo:(id)arg1 ;
-(id)unarchiveBookmark:(id)arg0 userInfo:(id)arg1 ;
-(id)unstarBookmark:(id)arg0 userInfo:(id)arg1 ;
-(id)updateReadProgressOfBookmark:(id)arg0 toProgress:(CGFloat)arg1 userInfo:(id)arg2 ;
-(id)verifyCredentialsWithUserInfo:(id)arg0 ;
-(void)cancelAllConnections;
-(void)cancelConnection:(id)arg0 ;
-(void)connection:(id)arg0 didFailWithError:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveData:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveResponse:(id)arg1 ;
-(void)connectionDidFinishLoading:(id)arg0 ;
-(void)dealloc;


@end


#endif
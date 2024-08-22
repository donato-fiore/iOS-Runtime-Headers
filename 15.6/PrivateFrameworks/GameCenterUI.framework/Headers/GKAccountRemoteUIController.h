// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKACCOUNTREMOTEUICONTROLLER_H
#define GKACCOUNTREMOTEUICONTROLLER_H

@class NSArray, NSDictionary, NSURL;


#import "GKRemoteUIController.h"

@interface GKAccountRemoteUIController : GKRemoteUIController

@property (nonatomic) BOOL authenticatePlayerOnCompletion; // ivar: _authenticatePlayerOnCompletion
@property (retain, nonatomic) NSArray *availableExternalServices; // ivar: _availableExternalServices
@property (nonatomic) NSInteger mode; // ivar: _mode
@property (retain, nonatomic) NSDictionary *postBody; // ivar: _postBody
@property (retain, nonatomic) NSURL *url; // ivar: _url


+(void)accountRemoteUIControllerForPlayer:(id)arg0 mode:(NSInteger)arg1 completionHandler:(id)arg2 ;
+(void)accountRemoteUIControllerForPlayer:(id)arg0 mode:(NSInteger)arg1 url:(id)arg2 postBody:(id)arg3 completionHandler:(id)arg4 ;
-(id)bagKey;
-(id)fallbackURL;
-(id)initWithMode:(NSInteger)arg0 ;
-(id)initWithMode:(NSInteger)arg0 player:(id)arg1 ;
-(void)fireCompletionHandler;
-(void)takeValuesFromClientInfo:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)updatePostbackDictionary:(id)arg0 withHandler:(id)arg1 ;


@end


#endif
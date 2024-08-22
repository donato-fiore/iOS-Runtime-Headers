// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFTRELLOSESSIONMANAGER_H
#define WFTRELLOSESSIONMANAGER_H

@class NSURL, NSDateFormatter, NSURLSession, NSString;

#import <Foundation/Foundation.h>


@interface WFTrelloSessionManager : NSObject

@property (readonly, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (readonly, nonatomic) NSDateFormatter *dateFormatter; // ivar: _dateFormatter
@property (readonly, nonatomic) NSURLSession *session; // ivar: _session
@property (copy, nonatomic) NSString *token; // ivar: _token


-(id)init;
-(id)initWithConfiguration:(id)arg0 token:(id)arg1 ;
-(void)createBoardWithName:(id)arg0 boardDescription:(id)arg1 completionHandler:(id)arg2 ;
-(void)createCardWithName:(id)arg0 listIdentifier:(id)arg1 dueDate:(id)arg2 cardPosition:(id)arg3 cardDescription:(id)arg4 completionHandler:(id)arg5 ;
-(void)createListWithName:(id)arg0 onBoardWithIdentifier:(id)arg1 position:(id)arg2 completionHandler:(id)arg3 ;
-(void)getAttachmentsOnCard:(id)arg0 completionHandler:(id)arg1 ;
-(void)getCardsForList:(id)arg0 completionHandler:(id)arg1 ;
-(void)getListsForBoard:(id)arg0 completionHandler:(id)arg1 ;
-(void)getOpenBoardsWithCompletionHandler:(id)arg0 ;
-(void)getUserWithCompletionHandler:(id)arg0 ;
-(void)lookupCardWithURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestPath:(id)arg0 parameters:(id)arg1 completionHandler:(id)arg2 ;
-(void)uploadFile:(id)arg0 onCard:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif
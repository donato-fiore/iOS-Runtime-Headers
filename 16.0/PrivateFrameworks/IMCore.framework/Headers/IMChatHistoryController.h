// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMCHATHISTORYCONTROLLER_H
#define IMCHATHISTORYCONTROLLER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface IMChatHistoryController : NSObject

@property (retain) NSMutableDictionary *_runningQueries; // ivar: _runningQueries


+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)loadMessageItemWithGUID:(id)arg0 completionBlock:(id)arg1 ;
-(void)loadMessageWithGUID:(id)arg0 completionBlock:(id)arg1 ;
-(void)messageItemQuery:(id)arg0 finishedWithResult:(id)arg1 chatGUIDs:(id)arg2 ;
-(void)messageQuery:(id)arg0 finishedWithResult:(id)arg1 chatGUIDs:(id)arg2 ;


@end


#endif
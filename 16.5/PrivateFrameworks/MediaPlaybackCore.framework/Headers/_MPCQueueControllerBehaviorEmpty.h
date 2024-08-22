// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MPCQUEUECONTROLLERBEHAVIOREMPTY_H
#define _MPCQUEUECONTROLLERBEHAVIOREMPTY_H

@class NSString;
@protocol MPCQueueControllerBehaviorImplementation, MPCQueueControllerBehaviorHost;

#import <Foundation/Foundation.h>


@interface _MPCQueueControllerBehaviorEmpty : NSObject <MPCQueueControllerBehaviorImplementation>

 {
    NSString *_identifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<MPCQueueControllerBehaviorHost> *host; // ivar: _host
@property (readonly, copy, nonatomic) NSString *sessionID;
@property (readonly) Class superclass;


+(BOOL)canLoadQueue:(id)arg0 reason:(*id)arg1 ;
-(BOOL)canJumpToContentItemID:(id)arg0 reason:(*id)arg1 ;
-(BOOL)canNextItemFromContentItemID:(id)arg0 reason:(*id)arg1 ;
-(BOOL)canPreviousItemFromContentItemID:(id)arg0 reason:(*id)arg1 ;
-(BOOL)itemExistsForContentItemID:(id)arg0 ;
-(id)_itemForContentItemID:(id)arg0 ;
-(id)_stateDictionaryIncludingQueue:(BOOL)arg0 ;
-(id)componentsForContentItemID:(id)arg0 ;
-(id)contentItemIDEnumeratorStartingAfterContentItemID:(id)arg0 mode:(NSInteger)arg1 options:(NSUInteger)arg2 ;
-(id)initWithSessionID:(id)arg0 ;
-(id)performLoadCommand:(id)arg0 completion:(id)arg1 ;
-(void)activeItemFlagsDidChange:(unsigned short)arg0 ;
-(void)connectToHost:(id)arg0 ;
-(void)currentItemDidChangeFromContentItemID:(id)arg0 toContentItemID:(id)arg1 ;
-(void)disconnectFromHost:(id)arg0 ;


@end


#endif
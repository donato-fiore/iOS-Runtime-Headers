// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MESSAGECONTENTREPRESENTATIONREQUEST_H
#define MESSAGECONTENTREPRESENTATIONREQUEST_H

@class EFCancelationToken, EFObservable<EFObserver>, EFObservable, EFFuture, NSString, EMMessage;
@protocol EFLoggable, EFCancelable, EFSignpostable, EMContentItemRequestDelegate, EMCollectionItemID;

#import <Foundation/Foundation.h>


@interface MessageContentRepresentationRequest : NSObject <EFLoggable, EFCancelable, EFSignpostable>

 {
    id<EMContentItemRequestDelegate> *_delegate;
    EFCancelationToken *_cancelationToken;
    EFObservable<EFObserver> *_inputObservable;
    EFObservable *_contentObservable;
    EFFuture *_futureContentRepresentation;
    uint8_t _hasError;
    NSUInteger _retyAttempt;
    BOOL _includeSuggestionItems;
    os_unfair_lock_s _contentRepresentationLock;
    NSString *_contentRepresentationType;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BOOL hasStarted;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isFinished;
@property (readonly, nonatomic) NSObject<EMCollectionItemID> *itemID; // ivar: _itemID
@property (readonly, nonatomic) EMMessage *message;
@property (readonly, nonatomic) EFFuture *messageFuture; // ivar: _messageFuture
@property (readonly) NSUInteger signpostID;
@property (readonly) NSUInteger state;
@property (readonly) Class superclass;


+(id)defaultScheduler;
+(id)log;
+(id)signpostLog;
-(id)_contentRepresentationFuture;
-(id)addLoadObserver:(id)arg0 ;
-(id)initWithMessage:(id)arg0 ;
-(id)initWithMessage:(id)arg0 includeSuggestions:(NSInteger)arg1 ;
-(id)initWithMessage:(id)arg0 includeSuggestions:(NSInteger)arg1 representationType:(id)arg2 delegate:(id)arg3 ;
-(id)initWithMessageList:(id)arg0 itemIdentifier:(id)arg1 includeSuggestions:(NSInteger)arg2 ;
-(id)initWithMessageList:(id)arg0 itemIdentifier:(id)arg1 includeSuggestions:(NSInteger)arg2 representationType:(id)arg3 delegate:(id)arg4 ;
-(id)onScheduler:(id)arg0 addLoadObserver:(id)arg1 ;
-(id)resultIfAvailable;
-(id)waitForResult;
-(void)_commonInitWithIncludeSuggestionItems:(BOOL)arg0 delegate:(id)arg1 ;
-(void)_issueMessageContentRepresentationRequest;
-(void)_resetFuture:(id)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)retry;
-(void)start;
-(void)updateItemID:(id)arg0 messageList:(id)arg1 ;


@end


#endif
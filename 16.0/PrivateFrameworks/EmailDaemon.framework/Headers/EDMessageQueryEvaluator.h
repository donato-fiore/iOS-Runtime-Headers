// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDMESSAGEQUERYEVALUATOR_H
#define EDMESSAGEQUERYEVALUATOR_H

@class NSString, EMMailboxScope, EFQuery, NSCache;
@protocol EFLoggable;

#import <Foundation/Foundation.h>

#import "EDMessagePersistence.h"

@interface EDMessageQueryEvaluator : NSObject <EFLoggable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) EMMailboxScope *mailboxScope; // ivar: _mailboxScope
@property (readonly, nonatomic) EDMessagePersistence *messagePersistence; // ivar: _messagePersistence
@property (readonly, nonatomic) EFQuery *messageQuery; // ivar: _messageQuery
@property (retain, nonatomic) NSCache *spotlightPredicateCache; // ivar: _spotlightPredicateCache
@property (readonly) Class superclass;


+(id)log;
-(id)filterMessages:(id)arg0 unmatchedMessages:(*id)arg1 ;
-(id)initWithQuery:(id)arg0 messagePersistence:(id)arg1 ;
-(id)transformAndFilterMessages:(id)arg0 ;
-(id)transformAndFilterMessages:(id)arg0 includeDeleted:(BOOL)arg1 ;
-(id)transformMessages:(id)arg0 ;
-(id)transformMessages:(id)arg0 includeDeleted:(BOOL)arg1 ;


@end


#endif
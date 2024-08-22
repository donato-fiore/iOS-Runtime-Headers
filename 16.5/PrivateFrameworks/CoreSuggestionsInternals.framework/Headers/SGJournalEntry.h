// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGJOURNALENTRY_H
#define SGJOURNALENTRY_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "SGStorageContact.h"
#import "SGStorageEvent.h"
#import "SGStorageReminder.h"

@interface SGJournalEntry : NSObject

@property (readonly, nonatomic) SGStorageContact *contact; // ivar: _contact
@property (readonly, nonatomic) SGStorageEvent *event; // ivar: _event
@property (readonly, nonatomic) NSArray *eventBatch; // ivar: _eventBatch
@property (readonly, nonatomic) NSUInteger operation; // ivar: _operation
@property (readonly, nonatomic) SGStorageReminder *reminder; // ivar: _reminder


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToJournalEntry:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithOperation:(NSUInteger)arg0 ;
-(id)initWithOperation:(NSUInteger)arg0 contact:(id)arg1 ;
-(id)initWithOperation:(NSUInteger)arg0 event:(id)arg1 ;
-(id)initWithOperation:(NSUInteger)arg0 eventBatch:(id)arg1 ;
-(id)initWithOperation:(NSUInteger)arg0 reminder:(id)arg1 ;


@end


#endif
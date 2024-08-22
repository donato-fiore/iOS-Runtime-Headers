// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMREMINDERHASHTAGCONTEXTCHANGEITEM_H
#define REMREMINDERHASHTAGCONTEXTCHANGEITEM_H

@class NSSet, NSMutableSet;

#import <Foundation/Foundation.h>

#import "REMReminderChangeItem.h"

@interface REMReminderHashtagContextChangeItem : NSObject

@property (readonly, nonatomic) NSSet *hashtags;
@property (retain, nonatomic) NSMutableSet *mutableHashtags; // ivar: _mutableHashtags
@property (retain, nonatomic) REMReminderChangeItem *reminderChangeItem; // ivar: _reminderChangeItem


-(id)addHashtagWithType:(NSInteger)arg0 name:(id)arg1 ;
-(id)addHashtagWithType:(NSInteger)arg0 name:(id)arg1 creationDate:(id)arg2 ;
-(id)initWithReminderChangeItem:(id)arg0 ;
-(void)addHashtag:(id)arg0 ;
-(void)cancelUndeleteHashtagWithID:(id)arg0 ;
-(void)removeAllHashtags;
-(void)removeHashtag:(id)arg0 ;
-(void)undeleteHashtagWithID:(id)arg0 ;


@end


#endif
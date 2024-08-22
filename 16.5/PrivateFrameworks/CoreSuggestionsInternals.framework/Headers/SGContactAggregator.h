// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGCONTACTAGGREGATOR_H
#define SGCONTACTAGGREGATOR_H

@class _PASLRUCache;

#import <Foundation/Foundation.h>


@interface SGContactAggregator : NSObject {
    _PASLRUCache *_cachedContacts;
}




+(id)mergeContact:(id)arg0 withContact:(id)arg1 ;
+(id)messageIdentifiersGeneratingContact:(id)arg0 ;
+(id)replaceDetailsInContact:(id)arg0 onDiskContact:(id)arg1 ;
-(id)augmentSuggestedContactWithContact:(id)arg0 conversationId:(id)arg1 store:(id)arg2 handle:(id)arg3 ;
-(id)init;
-(void)clear;
-(void)clearContactsWithConversationIdentifier:(id)arg0 ;
-(void)removeContact:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFMESSAGECOLLECTIONINFO_H
#define MFMESSAGECOLLECTIONINFO_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "MFMessageInfoOrderedSet.h"
#import "MFMessageInfo.h"

@interface MFMessageCollectionInfo : NSObject {
    MFMessageInfoOrderedSet *_messageInfoSet;
}


@property (readonly, nonatomic) NSArray *allMessageInfos;
@property (copy, nonatomic) id *duplicatePreferenceComparator;
@property (readonly, nonatomic) MFMessageInfo *firstMessage;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) MFMessageInfo *lastMessage;
@property (readonly, nonatomic) NSInteger messageCollectionHash; // ivar: _messageCollectionHash
@property (readonly, nonatomic) NSUInteger messageCountWithDuplicates;
@property (readonly, nonatomic) NSUInteger messagesCount;
@property (readonly, nonatomic) NSArray *uniqueMessageInfos;


+(NSUInteger)stateForMessages:(id)arg0 ;
-(NSUInteger)addMessageInfo:(id)arg0 ;
-(NSUInteger)indexOfMessageInfo:(id)arg0 ;
-(NSUInteger)indexWhereMessageInfoWouldBeInserted:(id)arg0 ;
-(NSUInteger)removeMessageInfo:(id)arg0 ;
-(NSUInteger)state;
-(id)debugDescription;
-(id)duplicatesOfMessageInfo:(id)arg0 ;
-(id)initWithHash:(NSInteger)arg0 comparator:(id)arg1 ;
-(id)messageInfoAtIndex:(NSUInteger)arg0 ;
-(id)messageInfoEquivalentToMessageInfo:(id)arg0 ;
-(id)visibleMessageInfo;
-(void)dealloc;
-(void)mergeWithCollection:(id)arg0 ;


@end


#endif
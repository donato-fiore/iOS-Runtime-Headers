// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFMESSAGEINFOORDEREDSET_H
#define MFMESSAGEINFOORDEREDSET_H

@class NSMutableArray, NSMutableDictionary, NSArray;

#import <Foundation/Foundation.h>

#import "MFSparseMutable64IndexSet.h"
#import "MFMessageInfo.h"

@interface MFMessageInfoOrderedSet : NSObject {
    MFSparseMutable64IndexSet *_knownMessageIDs;
    NSMutableArray *_mutableMessageInfos;
    NSMutableDictionary *_duplicateMessageInfos;
}


@property (readonly, nonatomic) NSArray *allMessageInfos;
@property (copy, nonatomic) id *comparator; // ivar: _comparator
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) NSUInteger countWithDuplicates;
@property (copy, nonatomic) id *duplicatePreferenceComparator; // ivar: _duplicatePreferenceComparator
@property (readonly, nonatomic) MFMessageInfo *firstMessage;
@property (readonly, nonatomic) MFMessageInfo *lastMessage;
@property (readonly, nonatomic) NSArray *uniqueMessageInfos;


-(NSUInteger)_scanForMessageInfoSimilarTo:(id)arg0 ;
-(NSUInteger)addMessageInfo:(id)arg0 ;
-(NSUInteger)indexOfMessageInfo:(id)arg0 ;
-(NSUInteger)indexWhereMessageInfoWouldBeInserted:(id)arg0 ;
-(NSUInteger)removeMessageInfo:(id)arg0 ;
-(NSUInteger)removeMessageInfoAtIndex:(NSUInteger)arg0 ;
-(id)_duplicateMessageInfosForMessageInfo:(id)arg0 ;
-(id)allDuplicatesOfMessageInfo:(id)arg0 ;
-(id)debugDescription;
-(id)duplicatesOfMessageInfo:(id)arg0 ;
-(id)initWithComparator:(id)arg0 ;
-(id)messageInfoAtIndex:(NSUInteger)arg0 ;
-(id)messageInfoEquivalentToMessageInfo:(id)arg0 ;
-(void)_addMessageInfoToDuplicates:(id)arg0 ;
-(void)_invalidate;
-(void)_removeDuplicatesForMessageInfo:(id)arg0 ;
-(void)dealloc;
-(void)enumerateUniqueMessageInfosWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)removeAllMessageInfos;
-(void)removeMessageInfosAtIndexes:(id)arg0 ;
-(void)replaceMessageInfo:(id)arg0 withReplacement:(id)arg1 inPlace:(BOOL)arg2 ;


@end


#endif
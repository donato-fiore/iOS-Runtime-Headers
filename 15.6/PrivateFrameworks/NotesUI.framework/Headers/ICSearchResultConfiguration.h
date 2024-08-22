// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICSEARCHRESULTCONFIGURATION_H
#define ICSEARCHRESULTCONFIGURATION_H

@class NSManagedObjectID, NSString, ICSortableSearchableItem;

#import <Foundation/Foundation.h>


@interface ICSearchResultConfiguration : NSObject

@property (readonly, nonatomic) NSManagedObjectID *foundAttachmentObjectID; // ivar: _foundAttachmentObjectID
@property (readonly, nonatomic) BOOL isTopHit; // ivar: _isTopHit
@property (readonly, nonatomic) NSString *searchString; // ivar: _searchString
@property (readonly, nonatomic) NSUInteger searchStringLength; // ivar: _searchStringLength
@property (readonly, nonatomic) NSUInteger searchSuggestionType; // ivar: _searchSuggestionType
@property (readonly, nonatomic) ICSortableSearchableItem *sortableSearchableItem; // ivar: _sortableSearchableItem


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithSearchString:(id)arg0 searchSuggestionType:(NSUInteger)arg1 isTopHit:(BOOL)arg2 foundAttachmentObjectID:(id)arg3 sortableSearchableItem:(id)arg4 ;


@end


#endif
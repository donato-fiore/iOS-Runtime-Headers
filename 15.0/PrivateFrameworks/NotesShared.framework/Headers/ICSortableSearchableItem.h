// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICSORTABLESEARCHABLEITEM_H
#define ICSORTABLESEARCHABLEITEM_H

@class NSArray, NSDate, NSDictionary, NSString, CSSearchableItem;

#import <Foundation/Foundation.h>

#import "ICRankingQueriesDefinition.h"

@interface ICSortableSearchableItem : NSObject

@property (readonly, nonatomic) NSArray *attachmentUniqueIdentifiers; // ivar: _attachmentUniqueIdentifiers
@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, nonatomic) NSDictionary *highlightInfo; // ivar: _highlightInfo
@property (readonly, nonatomic) BOOL isPrefixMatch; // ivar: _isPrefixMatch
@property (retain, nonatomic) NSString *language; // ivar: _language
@property (readonly, nonatomic) NSDate *modificationDate; // ivar: _modificationDate
@property (readonly, nonatomic) NSUInteger modificationDateBucket; // ivar: _modificationDateBucket
@property (nonatomic) BOOL needsLazyInitialization; // ivar: _needsLazyInitialization
@property (retain, nonatomic) ICRankingQueriesDefinition *rankingQueriesDefinition; // ivar: _rankingQueriesDefinition
@property (readonly, nonatomic) CGFloat rankingScore; // ivar: _rankingScore
@property (readonly, nonatomic) NSUInteger relevanceBitField; // ivar: _relevanceBitField
@property (readonly, nonatomic) NSUInteger searchResultType; // ivar: _searchResultType
@property (retain, nonatomic) NSString *searchString; // ivar: _searchString
@property (readonly, nonatomic) CSSearchableItem *searchableItem; // ivar: _searchableItem


+(id)sortDescriptorsForRankingStrategy:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithSearchableItem:(id)arg0 highlightInfo:(id)arg1 rankingScore:(CGFloat)arg2 attachmentUniqueIdentifiers:(id)arg3 ;
-(id)initWithSearchableItem:(id)arg0 searchString:(id)arg1 rankingQueriesDefinition:(id)arg2 rankingScore:(CGFloat)arg3 attachmentUniqueIdentifiers:(id)arg4 language:(id)arg5 ;
-(void)lazilyInitializeHighlightInfoAndIsPrefixMatchIfNecessary;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKMESSAGETYPESEARCHCONTROLLER_H
#define CKMESSAGETYPESEARCHCONTROLLER_H

@class NSSet, NSMutableSet, NSString, NSArray, IMTimingCollection;


#import "CKSearchController.h"

@interface CKMessageTypeSearchController : CKSearchController

@property (nonatomic) BOOL gotResults; // ivar: _gotResults
@property (retain, nonatomic) NSSet *intermediaryResults; // ivar: _intermediaryResults
@property (retain, nonatomic) NSMutableSet *itemsVerifiedOnDiskCache; // ivar: _itemsVerifiedOnDiskCache
@property (retain, nonatomic) NSString *priorQueryIdentifier; // ivar: _priorQueryIdentifier
@property (retain, nonatomic) NSArray *resultsToCheck; // ivar: _resultsToCheck
@property (nonatomic) BOOL searchTerminated; // ivar: _searchTerminated
@property (retain, nonatomic) IMTimingCollection *timingCollection; // ivar: _timingCollection


+(BOOL)useRecencyRankedSearchForMode:(NSUInteger)arg0 ;
+(NSUInteger)recencyRankedTargetResultCount;
+(id)timeRankedQueries;
-(BOOL)isTokenizationSearchController;
-(BOOL)wantsDeleteAction;
-(BOOL)wantsFooterSection;
-(Class)footerClass;
-(NSUInteger)maxResultsForMode:(NSUInteger)arg0 ;
-(id)chatGUIDForSearchableItem:(id)arg0 ;
-(id)createFoundItemsHandler:(SEL)arg0 ;
-(id)itemProviderForSearchResult:(id)arg0 ;
-(id)menuElementsForResult:(id)arg0 atRect:(struct CGRect )arg1 ;
-(id)queryResultsForItems:(id)arg0 ;
-(id)rankingQueriesWithText:(id)arg0 ;
-(id)zkwFilterQueries;
-(struct NSDirectionalEdgeInsets )additionalGroupInsets;
-(void)_asyncCheckIfResultsExistOnDisk:(id)arg0 firstBatch:(BOOL)arg1 ;
-(void)checkIfResultsExistOnDiskAndNotify:(id)arg0 ;
-(void)deleteAttachmentForResult:(id)arg0 ;
-(void)fractionalWidth:(*CGFloat)arg0 count:(*NSUInteger)arg1 forLayoutWidth:(NSUInteger)arg2 ;
-(void)postProcessAndUpdateResults:(id)arg0 ;
-(void)removeFromCache:(id)arg0 ;
-(void)searchEnded;
-(void)searchWithText:(id)arg0 mode:(NSUInteger)arg1 ;


@end


#endif
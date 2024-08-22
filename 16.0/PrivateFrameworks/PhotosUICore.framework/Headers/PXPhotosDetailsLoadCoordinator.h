// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPHOTOSDETAILSLOADCOORDINATOR_H
#define PXPHOTOSDETAILSLOADCOORDINATOR_H

@class NSMutableArray, NSHashTable;

#import <Foundation/Foundation.h>


@interface PXPhotosDetailsLoadCoordinator : NSObject

@property (readonly, nonatomic) NSMutableArray *_relatedBlocks; // ivar: __relatedBlocks
@property (readonly, nonatomic) NSMutableArray *_suggestionsBlocks; // ivar: __suggestionsBlocks
@property (readonly, nonatomic) NSHashTable *_tokens; // ivar: __tokens
@property (nonatomic) CGFloat timeoutDelay; // ivar: _timeoutDelay


+(id)loadCoordinatorForContext:(id)arg0 ;
-(BOOL)_canPerformRelatedFetch;
-(BOOL)_canPerformSuggestionsFetch;
-(id)_createToken;
-(id)init;
-(id)tokenForCuratedFetch;
-(id)tokenForLivePhotoVariations;
-(void)_tokenDidComplete:(id)arg0 ;
-(void)performBlockWhenReadyToFetchRelated:(id)arg0 ;
-(void)performBlockWhenReadyToFetchSuggestions:(id)arg0 ;


@end


#endif
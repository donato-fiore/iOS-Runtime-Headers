// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPEOPLEBOOTSTRAPCONTEXT_H
#define PXPEOPLEBOOTSTRAPCONTEXT_H

@class PHFace, NSString;
@protocol PXPersonSuggestion, PXPeopleSuggestionManagerDataSource, PXPerson;

#import <Foundation/Foundation.h>

#import "PXPeopleNameSelection.h"
#import "PXPeopleSuggestionManager.h"

@interface PXPeopleBootstrapContext : NSObject

@property NSUInteger bootstrapType; // ivar: _bootstrapType
@property (copy, nonatomic) id *cancelBlock; // ivar: _cancelBlock
@property (copy, nonatomic) id *delayedPersonBlock; // ivar: _delayedPersonBlock
@property (retain, nonatomic) PHFace *face; // ivar: _face
@property (readonly, nonatomic) NSString *localizedName;
@property (retain) PXPeopleNameSelection *nameSelection; // ivar: _nameSelection
@property (copy, nonatomic) id *onInitBlock; // ivar: _onInitBlock
@property (retain, nonatomic) NSObject<PXPersonSuggestion> *personSuggestion; // ivar: _personSuggestion
@property (retain, nonatomic) NSObject<PXPeopleSuggestionManagerDataSource> *prefetchedDataSource; // ivar: _prefetchedDataSource
@property (nonatomic) BOOL skipInitialAction; // ivar: _skipInitialAction
@property (retain) NSObject<PXPerson> *sourcePerson; // ivar: _sourcePerson
@property (retain) PXPeopleSuggestionManager *suggestionManager; // ivar: _suggestionManager
@property (retain) NSObject<PXPerson> *targetPerson; // ivar: _targetPerson
@property (nonatomic) BOOL wantsMergeCandidateSuggestions; // ivar: _wantsMergeCandidateSuggestions
@property (nonatomic) BOOL wantsNaming; // ivar: _wantsNaming
@property (nonatomic) BOOL wantsPostNaming; // ivar: _wantsPostNaming
@property (nonatomic) BOOL wantsToBeAddedToPeopleAlbum; // ivar: _wantsToBeAddedToPeopleAlbum


+(id)contextWithFace:(id)arg0 type:(NSUInteger)arg1 delayedPersonBlock:(id)arg2 ;
+(id)contextWithPerson:(id)arg0 type:(NSUInteger)arg1 ;
+(id)contextWithPersonSuggestion:(id)arg0 ;
-(id)init;


@end


#endif
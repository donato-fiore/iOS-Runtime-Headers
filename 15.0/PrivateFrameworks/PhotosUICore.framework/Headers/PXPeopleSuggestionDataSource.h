// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPEOPLESUGGESTIONDATASOURCE_H
#define PXPEOPLESUGGESTIONDATASOURCE_H

@class NSString, PHFetchResult, NSArray;
@protocol PHPhotoLibraryChangeObserver, PXPeopleSuggestionManagerDataSource;

#import <Foundation/Foundation.h>


@interface PXPeopleSuggestionDataSource : NSObject <PHPhotoLibraryChangeObserver, PXPeopleSuggestionManagerDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger flowType; // ivar: _flowType
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger initialPageLimit; // ivar: _initialPageLimit
@property (copy, nonatomic) PHFetchResult *mergeCandidateFetchResult; // ivar: _mergeCandidateFetchResult
@property (copy, nonatomic) NSArray *mergeCandidates; // ivar: _mergeCandidates
@property (nonatomic) NSUInteger suggestionFetchType; // ivar: _suggestionFetchType
@property (readonly) Class superclass;


-(BOOL)cancelSuggestionForPerson:(id)arg0 withToken:(id)arg1 error:(*id)arg2 ;
-(NSUInteger)_mergedUserFeedbackTypeFromConfirmedSuggestions:(id)arg0 ;
-(id)commitSuggestionsForPerson:(id)arg0 withConfirmedSuggestions:(id)arg1 andRejectedSuggestions:(id)arg2 ;
-(id)fetchAndCacheMergeCandidatesForPerson:(id)arg0 ;
-(id)initWithFlowType:(NSUInteger)arg0 ;
-(id)suggestionsForPerson:(id)arg0 withConfirmedSuggestions:(id)arg1 andRejectedSuggestions:(id)arg2 completion:(id)arg3 ;
-(void)_saveUserFeedbackType:(NSUInteger)arg0 toBackingPerson:(id)arg1 personChangeRequest:(id)arg2 ;
-(void)photoLibraryDidChange:(id)arg0 ;
-(void)startListeningForLibraryChanges;
-(void)stopListeningForLibraryChanges;


@end


#endif
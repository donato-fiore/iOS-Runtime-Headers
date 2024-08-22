// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIFINDSESSION_H
#define UIFINDSESSION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "UIResponder.h"
#import "UITextSearchOptions.h"
#import "UIFindInteraction.h"
#import "UIView.h"

@interface UIFindSession : NSObject {
    UIResponder *_divergentResponderForSession;
}


@property (readonly, nonatomic) BOOL allowsReplacement; // ivar: _allowsReplacement
@property (readonly, nonatomic) BOOL allowsReplacementForCurrentlyHighlightedResult;
@property (retain, nonatomic) UITextSearchOptions *configuredSearchOptions; // ivar: _configuredSearchOptions
@property (readonly, nonatomic) UIResponder *divergentResponder;
@property (readonly, nonatomic) NSInteger highlightedResultIndex;
@property (weak, nonatomic) UIFindInteraction *parentInteraction; // ivar: _parentInteraction
@property (copy, nonatomic) NSString *replacementText; // ivar: _replacementText
@property (readonly, nonatomic) NSInteger resultCount; // ivar: _resultCount
@property (nonatomic) NSInteger searchResultDisplayStyle; // ivar: _searchResultDisplayStyle
@property (copy, nonatomic) NSString *searchText; // ivar: _searchText
@property (weak, nonatomic) UIResponder *searchableResponder; // ivar: _searchableResponder
@property (readonly, nonatomic) UIView *searchableResponderAsView;
@property (readonly, nonatomic) BOOL supportsReplacement;


-(void)highlightNextResultInDirection:(NSInteger)arg0 ;
-(void)invalidateFoundResults;
-(void)performSearchWithQuery:(id)arg0 options:(id)arg1 ;
-(void)performSingleReplacementWithSearchQuery:(id)arg0 replacementString:(id)arg1 options:(id)arg2 ;
-(void)replaceAllInstancesOfSearchQuery:(id)arg0 withReplacementString:(id)arg1 options:(id)arg2 ;


@end


#endif
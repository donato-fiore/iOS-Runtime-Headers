// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSCYCLERBOOKMARKOPERATIONCONTEXT_H
#define WBSCYCLERBOOKMARKOPERATIONCONTEXT_H

@class NSString;
@protocol WBSCyclerTestTarget;

#import <Foundation/Foundation.h>

#import "WBSCyclerBookmarkListRepresentation.h"

@interface WBSCyclerBookmarkOperationContext : NSObject

@property (retain, nonatomic) NSObject<WBSCyclerTestTarget> *testTarget; // ivar: _testTarget
@property (copy, nonatomic) NSString *titlePrefix; // ivar: _titlePrefix
@property (retain, nonatomic) WBSCyclerBookmarkListRepresentation *topLevelBookmark; // ivar: _topLevelBookmark


-(BOOL)_isBookmarkPrefixed:(id)arg0 ;
-(BOOL)_isBookmarkValid:(id)arg0 ;
-(id)_buildDictionaryOfDescendantIdentifiersToParentIdentifiersFromList:(id)arg0 ;
-(id)_copyBookmark:(id)arg0 filteringWithIdentifierWhitelist:(id)arg1 ;
-(id)filterOutBookmarksWithoutTitlePrefixInList:(id)arg0 ;
-(id)randomBookmarkTitle;
-(id)randomDescendantOfList:(id)arg0 enforcingTitlePrefixValidity:(BOOL)arg1 passingTest:(id)arg2 ;
-(id)randomValidStrictDescendantOfList:(id)arg0 ;
-(id)randomValidStrictDescendantOfTopLevelBookmark;


@end


#endif
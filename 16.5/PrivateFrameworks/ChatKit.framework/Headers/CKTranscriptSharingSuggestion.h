// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKTRANSCRIPTSHARINGSUGGESTION_H
#define CKTRANSCRIPTSHARINGSUGGESTION_H

@class NSString;
@protocol SGSuggestionCategory, SGSuggestion, CKTranscriptSharingSuggestionDelegate, SGSuggestionDelegate;

#import <Foundation/Foundation.h>


@interface CKTranscriptSharingSuggestion : NSObject <SGSuggestionCategory, SGSuggestion>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKTranscriptSharingSuggestionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (weak, nonatomic) NSObject<SGSuggestionDelegate> *suggestionDelegate; // ivar: suggestionDelegate
@property (readonly) Class superclass;


+(id)bannerWithState:(NSInteger)arg0 ;
-(BOOL)suggestionProminentActionButton;
-(NSInteger)suggestionActionButtonType;
-(id)initWithState:(NSInteger)arg0 ;
-(id)suggestionCategory;
-(id)suggestionCategoryId;
-(id)suggestionCategoryImage;
-(id)suggestionCategoryLocalizedCountOfItems:(id)arg0 ;
-(id)suggestionCategorySubtitleForItems:(id)arg0 ;
-(id)suggestionCategoryTitle;
-(id)suggestionCategoryTitleForItems:(id)arg0 ;
-(id)suggestionDismissAction;
-(id)suggestionImageSGView;
-(id)suggestionPrimaryAction;
-(id)suggestionSubtitle;
-(id)suggestionTitle;


@end


#endif
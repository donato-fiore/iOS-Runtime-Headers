// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSYNTAXHIGHLIGHTEDTOKENTEXTVIEW_H
#define WFSYNTAXHIGHLIGHTEDTOKENTEXTVIEW_H

@class NSMutableArray, NSString;
@protocol NSTextStorageDelegate;


#import "WFTextTokenTextView.h"
#import "WFSyntaxHighlightingPluginManager.h"

@interface WFSyntaxHighlightedTokenTextView : WFTextTokenTextView <NSTextStorageDelegate>

 {
    NSMutableArray *_lineIndices;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WFSyntaxHighlightingPluginManager *pluginManager; // ivar: _pluginManager
@property (readonly) Class superclass;


-(NSUInteger)currentSyntaxHighlightingAppearance;
-(id)init;
-(struct _NSRange )lineRangeForCharacterRange:(struct _NSRange )arg0 ;
-(void)setAttributedText:(id)arg0 ;
-(void)setVariableString:(id)arg0 ;
-(void)synchronizeTokenManagerWithTextStorage:(id)arg0 ;
-(void)textUpdated;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateHighlighting;
-(void)updateLineIndicesForTextStorage:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DDCONTEXTMENUACTION_H
#define DDCONTEXTMENUACTION_H

@class NSURL, RVItem, NSAttributedString;

#import <Foundation/Foundation.h>


@interface DDContextMenuAction : NSObject {
    NSURL *_url;
    ? _result;
    RVItem *_item;
    RVItem *_originalItem;
    NSAttributedString *_menuTitle;
    RVItem *_additionalLookupItem;
}




+(?)buttonActionsForURL:(?)arg0 result:(?)arg1 contact:(?)arg2 icsString:(?)arg3 context:(?)arg4 view:(?)arg5 identifier:(?)arg6 suggestedActionsdefaultAction;
+(?)contextMenuConfigurationWithResult:(?)arg0 inView:(?)arg1 contextmenuIdentifier;
+(?)defaultActionWithResultcontext;
+(?)performDefaultActionWithResult:(?)arg0 inView:(?)arg1 atLocation:(?)arg2 withMenuInteractioncontext;
+(?)previewActionForResult:(?)arg0 URLcontext;
+(?)previewViewProviderForResultcontext;
+(BOOL)validateContext:(id)arg0 silent:(BOOL)arg1 ;
+(id)contextMenuConfigurationAtIndex:(NSUInteger)arg0 inTextStorage:(id)arg1 inView:(id)arg2 context:(id)arg3 menuIdentifier:(id)arg4 ;
+(id)contextMenuConfigurationForURL:(id)arg0 identifier:(id)arg1 selectedText:(id)arg2 results:(id)arg3 inView:(id)arg4 context:(id)arg5 menuIdentifier:(id)arg6 ;
+(id)contextMenuConfigurationWithRVItem:(id)arg0 inView:(id)arg1 context:(id)arg2 menuIdentifier:(id)arg3 ;
+(id)contextMenuConfigurationWithURL:(id)arg0 inView:(id)arg1 context:(id)arg2 menuIdentifier:(id)arg3 ;
+(id)defaultActionWithURL:(id)arg0 context:(id)arg1 ;
+(id)filterResultsForQuickActions:(id)arg0 ;
+(id)identificationStringForMenuElement:(id)arg0 useDefault:(BOOL)arg1 ;
+(id)previewViewProviderForPreviewAction:(SEL)arg0 context:(id)arg1 ;
+(id)previewViewProviderForURL:(SEL)arg0 context:(id)arg1 ;
+(id)updateContext:(id)arg0 withSourceRect:(struct CGRect )arg1 ;
+(void)performDefaultActionWithURL:(id)arg0 inView:(id)arg1 atLocation:(struct CGPoint )arg2 withMenuInteraction:(id)arg3 context:(id)arg4 ;
-(?)commonInitWithResultURL;
-(?)initWithResultURL;
-(id)_rawContextMenuContentForView:(id)arg0 interactionDelegate:(id)arg1 context:(id)arg2 elements:(id)arg3 defaultAction:(*id)arg4 options:(NSInteger)arg5 ;
-(id)_updateMenuElementItems:(id)arg0 withActions:(id)arg1 view:(id)arg2 interactionDelegate:(id)arg3 options:(NSInteger)arg4 ;
-(id)contextMenuConfigurationWithIdentifier:(id)arg0 inView:(id)arg1 context:(id)arg2 ;
// -(id)contextMenuConfigurationWithIdentifier:(id)arg0 inView:(id)arg1 context:(id)arg2 defaultAction:(*id)arg3 menuProvider:(*id)arg4 options:(unk)arg5  ;
-(id)initAtIndex:(NSUInteger)arg0 inTextStorage:(id)arg1 ;
-(id)initWithRVItem:(id)arg0 ;
-(void)dealloc;


@end


#endif
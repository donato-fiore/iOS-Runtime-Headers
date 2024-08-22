// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLISTTEMPLATE_H
#define CPLISTTEMPLATE_H

@class NSString, NSArray, NSMutableSet, NAFuture;
@protocol CPListClientTemplateDelegate, CPBarButtonProviding, CPListTemplateDelegate;


#import "CPTemplate.h"
#import "CPAssistantCellConfiguration.h"
#import "CPBarButton.h"

@interface CPListTemplate : CPTemplate <CPListClientTemplateDelegate, CPBarButtonProviding>



@property (retain, nonatomic) CPAssistantCellConfiguration *assistantCellConfiguration; // ivar: _assistantCellConfiguration
@property (retain, nonatomic) CPBarButton *backButton;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CPListTemplateDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *emptyViewSubtitleVariants; // ivar: _emptyViewSubtitleVariants
@property (copy, nonatomic) NSArray *emptyViewTitleVariants; // ivar: _emptyViewTitleVariants
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger itemCount;
@property (retain, nonatomic) NSMutableSet *itemsToReload; // ivar: _itemsToReload
@property (retain, nonatomic) NSArray *leadingNavigationBarButtons;
@property (readonly, nonatomic) NSUInteger sectionCount;
@property (readonly, copy, nonatomic) NSArray *sections; // ivar: _sections
@property (readonly) Class superclass;
@property (retain, nonatomic) NAFuture *templateProviderFuture;
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSArray *trailingNavigationBarButtons;


+(BOOL)supportsSecureCoding;
+(NSUInteger)maximumItemCount;
+(NSUInteger)maximumSectionCount;
-(id)_itemForHostItemWithIdentifier:(id)arg0 ;
-(id)_sectionsByTrimmingAndLinkingSections:(id)arg0 ;
-(id)indexPathForItem:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 sections:(id)arg1 ;
-(id)initWithTitle:(id)arg0 sections:(id)arg1 assistantCellConfiguration:(id)arg2 ;
-(void)_linkItemsInSection:(id)arg0 ;
-(void)_setItemNeedsUpdate:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleActionForControlIdentifier:(id)arg0 ;
-(void)listTemplateWithIdentifier:(id)arg0 didSelectImageAtIndex:(NSUInteger)arg1 inImageRowItemWithIdentifier:(id)arg2 ;
-(void)listTemplateWithIdentifier:(id)arg0 didSelectListItemWithIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)performUpdate;
-(void)updateHeaderImage:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)updateSections:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUPLACEQUICKLINKSSECTIONCONTROLLER_H
#define MUPLACEQUICKLINKSSECTIONCONTROLLER_H

@class NSArray;
@protocol MUPlaceQuickLinksSectionControllerDelegate;


#import "MUPlaceSectionController.h"
#import "MUPlaceSectionView.h"
#import "MUActionGroupSectionView.h"

@interface MUPlaceQuickLinksSectionController : MUPlaceSectionController {
    NSArray *_quickLinks;
    MUPlaceSectionView *_sectionView;
    MUActionGroupSectionView *_cardContentView;
    BOOL _active;
}


@property (weak, nonatomic) NSObject<MUPlaceQuickLinksSectionControllerDelegate> *quickLinkProviderDelegate; // ivar: _quickLinkProviderDelegate


-(BOOL)hasContent;
-(BOOL)isActive;
-(id)initWithMapItem:(id)arg0 ;
-(id)sectionView;
-(int)analyticsModuleType;
-(void)_buildContentViews;
-(void)_fetchQuickLinksIfNeeded;
-(void)_instrumentAppClipWithURLString:(id)arg0 ;
-(void)_instrumentShortcutWithURLString:(id)arg0 ;
-(void)_performTapInstrumentationWithQuickLink:(id)arg0 ;
-(void)_setupSectionView;
-(void)setActive:(BOOL)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KNUISTATE_H
#define KNUISTATE_H

@class NSMutableDictionary, NSSet, NSString, NSArray, TSDFreehandDrawingToolkitUIState, TSKSelectionPath;
@protocol NSCopying, TSAUIState;

#import <Foundation/Foundation.h>

#import "KNMacUILayout.h"
#import "KNSlideCollectionSelection.h"

@interface KNUIState : NSObject <NSCopying, TSAUIState>

 {
    CGFloat _mobileCanvasViewScale;
    CGPoint _mobileCanvasOffset;
    CGFloat _desktopCanvasViewScale;
    CGPoint _desktopCanvasOffset;
    NSMutableDictionary *_chartUIState;
}


@property (nonatomic) CGPoint canvasOffset;
@property (nonatomic) CGFloat canvasViewScale;
@property (copy, nonatomic) NSSet *collapsedSlideNodes; // ivar: _collapsedSlideNodes
@property (nonatomic) BOOL commentsPrintingToggleEnabled; // ivar: _commentsPrintingToggleEnabled
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat desktopActivityStreamViewWidth; // ivar: _desktopActivityStreamViewWidth
@property (nonatomic) CGFloat desktopElementListViewWidth; // ivar: _desktopElementListViewWidth
@property (nonatomic) CGSize desktopMainContentSize; // ivar: _desktopMainContentSize
@property (nonatomic) CGPoint desktopMainWindowOrigin; // ivar: _desktopMainWindowOrigin
@property (nonatomic) CGFloat desktopNavigatorViewWidth; // ivar: _desktopNavigatorViewWidth
@property (nonatomic) BOOL desktopOutlineViewDefaultFixed; // ivar: _desktopOutlineViewDefaultFixed
@property (nonatomic) CGFloat desktopOutlineViewWidth; // ivar: _desktopOutlineViewWidth
@property (nonatomic) CGFloat desktopPresenterNotesHeight; // ivar: _desktopPresenterNotesHeight
@property (nonatomic) CGFloat desktopPresenterNotesScrollPosition; // ivar: _desktopPresenterNotesScrollPosition
@property (copy, nonatomic) KNMacUILayout *documentUILayout; // ivar: _documentUILayout
@property (nonatomic) BOOL editingDisabled; // ivar: _editingDisabled
@property (copy, nonatomic) NSArray *elementListExpandedGroups; // ivar: _elementListExpandedGroups
@property (retain, nonatomic) TSDFreehandDrawingToolkitUIState *freehandDrawingToolkitUIState; // ivar: _freehandDrawingToolkitUIState
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL lightTableHidesSkippedSlides; // ivar: _lightTableHidesSkippedSlides
@property (nonatomic) CGFloat lightTableZoomScale; // ivar: _lightTableZoomScale
@property (nonatomic) BOOL mobileLightTableHidesSkippedSlides; // ivar: _mobileLightTableHidesSkippedSlides
@property (nonatomic) CGFloat mobileLightTableZoomScale; // ivar: _mobileLightTableZoomScale
@property (copy, nonatomic) NSSet *outlineCollapsedSlideNodes; // ivar: _outlineCollapsedSlideNodes
@property (copy, nonatomic) NSSet *outlineHasBodySlideNodes; // ivar: _outlineHasBodySlideNodes
@property (copy, nonatomic) TSKSelectionPath *selectionPath; // ivar: _selectionPath
@property (nonatomic) BOOL showMasterGuides; // ivar: _showMasterGuides
@property (nonatomic) BOOL showSlideGuides; // ivar: _showSlideGuides
@property (nonatomic) BOOL showsComments; // ivar: _showsComments
@property (nonatomic) BOOL showsMobileLightTable; // ivar: _showsMobileLightTable
@property (nonatomic) BOOL showsMobileOutline; // ivar: _showsMobileOutline
@property (nonatomic) BOOL showsRuler; // ivar: _showsRuler
@property (readonly, nonatomic) KNSlideCollectionSelection *slideTreeSelection;
@property (nonatomic) BOOL slideViewFitsContentInWindow; // ivar: _slideViewFitsContentInWindow
@property (readonly) Class superclass;


-(id)UIStateForChart:(id)arg0 ;
-(id)archivedUIStateInContext:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 context:(id)arg2 ;
-(void)resetForInitialViewing;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 context:(id)arg2 ;
-(void)setUIState:(id)arg0 forChart:(id)arg1 ;
-(void)updateOutlineStateFromSlideTree:(id)arg0 ;


@end


#endif
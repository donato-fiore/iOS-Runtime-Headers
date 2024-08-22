// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TNUISTATE_H
#define TNUISTATE_H

@class NSMutableDictionary, NSString, TSDFreehandDrawingToolkitUIState, NSArray, TSKSelectionPath;
@protocol NSCopying, TSAUIState, TNUIStateDelegate;

#import <Foundation/Foundation.h>


@interface TNUIState : NSObject <NSCopying, TSAUIState>



@property (readonly, nonatomic) NSMutableDictionary *chartUIState; // ivar: _chartUIState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) float defaultViewScale;
@property (weak, nonatomic) NSObject<TNUIStateDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) CGSize desktopScreenSize; // ivar: _desktopScreenSize
@property (nonatomic) CGRect desktopWindowFrame; // ivar: _desktopWindowFrame
@property (nonatomic) NSInteger documentMode; // ivar: _documentMode
@property (readonly, nonatomic) NSMutableDictionary *editModeSheetUIStates; // ivar: _editModeSheetUIStates
@property (nonatomic) BOOL editingDisabled; // ivar: _editingDisabled
@property (retain, nonatomic) TSDFreehandDrawingToolkitUIState *freehandDrawingToolkitUIState; // ivar: _freehandDrawingToolkitUIState
@property (readonly, nonatomic) BOOL hasPreviousVisibleRect;
@property (readonly, nonatomic) BOOL hasVisibleRect;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger inspectorPaneHiddenState;
@property (nonatomic, getter=inspectorPaneIsAutoHidden) BOOL inspectorPaneIsAutoHidden; // ivar: _inspectorPaneIsAutoHidden
@property (nonatomic, getter=inspectorPaneIsVisible) BOOL inspectorPaneIsVisible; // ivar: _inspectorPaneIsVisible
@property (nonatomic) int inspectorPaneViewMode; // ivar: _inspectorPaneViewMode
@property (readonly, nonatomic) BOOL isInPaginatedMode; // ivar: _isInPaginatedMode
@property (readonly, nonatomic) CGPoint previousScrollPosition;
@property (readonly, nonatomic) float previousViewScale;
@property (nonatomic) CGRect previousVisibleRect;
@property (nonatomic) BOOL removedAllQuickCalcFunctions; // ivar: _removedAllQuickCalcFunctions
@property (readonly, nonatomic) CGPoint scrollPosition;
@property (copy, nonatomic) NSArray *selectedQuickCalcFunctions; // ivar: _selectedQuickCalcFunctions
@property (copy, nonatomic) TSKSelectionPath *selectionPath; // ivar: _selectionPath
@property (readonly, nonatomic) NSMutableDictionary *sheetUIStates; // ivar: _sheetUIStates
@property (nonatomic) BOOL showCanvasGuides; // ivar: _showCanvasGuides
@property (nonatomic) BOOL showsComments; // ivar: _showsComments
@property (nonatomic) BOOL showsRulers; // ivar: _showsRulers
@property (nonatomic) BOOL sidebarVisible; // ivar: _sidebarVisible
@property (nonatomic) CGFloat sidebarWidth; // ivar: _sidebarWidth
@property (readonly) Class superclass;
@property (readonly, nonatomic) float viewScale;
@property (nonatomic) CGRect visibleRect;


+(CGFloat)maximumViewScale;
+(CGFloat)minimumViewScale;
-(BOOL)isEqual:(id)arg0 ;
-(float)p_calculateViewScaleForVisibleRect:(struct CGRect )arg0 ;
-(float)viewScaleForSheet:(id)arg0 ;
-(id)UIStateForChart:(id)arg0 ;
-(id)_sheetUIStateForPrintingSheet:(id)arg0 ;
-(id)archivedUIStateInContext:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)p_fixedUpSelectionPathForRestoration:(id)arg0 forcingUnpagination:(BOOL)arg1 ;
-(id)p_uiStateForActiveSheet;
-(id)uiStateForSheet:(id)arg0 ;
-(id)uiStateForSheet:(id)arg0 createIfNeeded:(BOOL)arg1 ;
-(void)clearPreviousVisibleRect;
-(void)clearVisibleRect;
-(void)enumerateSheetUIStatesWithBlock:(id)arg0 ;
-(void)fixupSelectionPathsForRestorationForcingUnpagination:(BOOL)arg0 ;
-(void)p_enterPaginatedMode;
-(void)p_exitPaginatedMode;
-(void)removeAllUIStatesForSheet:(id)arg0 ;
-(void)removeUIStateForSheet:(id)arg0 ;
-(void)resetForInitialViewing;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 context:(id)arg2 ;
-(void)setUIState:(id)arg0 forChart:(id)arg1 ;
-(void)setUIState:(id)arg0 forSheet:(id)arg1 ;


@end


#endif
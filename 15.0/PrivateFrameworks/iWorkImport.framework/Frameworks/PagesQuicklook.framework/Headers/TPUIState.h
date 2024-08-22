// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPUISTATE_H
#define TPUISTATE_H

@class NSString, TSKAnnotationAuthor, NSDictionary, TSDFreehandDrawingToolkitUIState, TSKPencilAnnotationUIState, TSKSelectionPath;
@protocol NSCopying, TSAUIState;

#import <Foundation/Foundation.h>


@interface TPUIState : NSObject <NSCopying, TSAUIState>

 {
    BOOL _sectionTemplateDrawablesSelectable;
    NSInteger _viewScaleMode;
    BOOL _wordCountHUDVisible;
    int _wordCountHUDType;
    CGPoint _wordCountHUDPosition;
    BOOL _shouldShowCommentSidebar;
    CGRect _windowFrame;
    NSString *_selectedInspectorSwitchSegmentIdentifier;
    BOOL _inspectorHidden;
}


@property (retain, nonatomic) TSKAnnotationAuthor *authorForFiltering; // ivar: _authorForFiltering
@property (copy, nonatomic) NSString *authorForFilteringName; // ivar: _authorForFilteringName
@property (nonatomic) BOOL changeTrackingPaused; // ivar: _changeTrackingPaused
@property (copy, nonatomic) NSDictionary *chartUIState; // ivar: _chartUIState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL editingDisabled; // ivar: _editingDisabled
@property (retain, nonatomic) TSDFreehandDrawingToolkitUIState *freehandDrawingToolkitUIState; // ivar: _freehandDrawingToolkitUIState
@property (readonly, nonatomic) BOOL hasShowsCTDeletions; // ivar: _hasShowsCTDeletions
@property (readonly, nonatomic) BOOL hasShowsCTMarkup; // ivar: _hasShowsCTMarkup
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL layoutBordersVisible; // ivar: _layoutBordersVisible
@property (nonatomic) NSInteger pageViewState; // ivar: _pageViewState
@property (retain, nonatomic) TSKPencilAnnotationUIState *pencilAnnotationUIState; // ivar: _pencilAnnotationUIState
@property (nonatomic) BOOL pencilAnnotationsHidden; // ivar: _pencilAnnotationsHidden
@property (nonatomic) CGFloat presentationAutoScrollSpeed; // ivar: _presentationAutoScrollSpeed
@property (nonatomic) BOOL rulersVisible; // ivar: _rulersVisible
@property (copy, nonatomic) TSKSelectionPath *selectionPath; // ivar: _selectionPath
@property (nonatomic) BOOL showUserDefinedGuides; // ivar: _showUserDefinedGuides
@property (nonatomic) BOOL showUserDefinedPageTemplateGuides; // ivar: _showUserDefinedPageTemplateGuides
@property (nonatomic) BOOL showsCTDeletions; // ivar: _showsCTDeletions
@property (nonatomic) BOOL showsCTMarkup; // ivar: _showsCTMarkup
@property (nonatomic) BOOL showsComments; // ivar: _showsComments
@property (nonatomic) BOOL showsFlowMode; // ivar: _showsFlowMode
@property (nonatomic) BOOL showsPageNavigator; // ivar: _showsPageNavigator
@property (nonatomic) BOOL showsTOCNavigator; // ivar: _showsTOCNavigator
@property (readonly) Class superclass;
@property (nonatomic) CGFloat viewScale; // ivar: _viewScale
@property (nonatomic) NSInteger viewScaleModeiOS; // ivar: _viewScaleModeiOS
@property (nonatomic) CGRect visibleRect; // ivar: _visibleRect


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToUIState:(id)arg0 ;
-(id)UIStateForChart:(id)arg0 ;
-(id)archivedUIStateInContext:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)resetForInitialViewing;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 context:(id)arg2 ;
-(void)setUIState:(id)arg0 forChart:(id)arg1 ;


@end


#endif
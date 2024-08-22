// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKACTIONSHEETASSISTANT_H
#define WKACTIONSHEETASSISTANT_H

@class NSString;
@protocol WKActionSheetDelegate, DDDetectionControllerInteractionDelegate, UIContextMenuInteractionDelegate, WKActionSheetAssistantDelegate;

#import <Foundation/Foundation.h>


@interface WKActionSheetAssistant : NSObject <WKActionSheetDelegate, DDDetectionControllerInteractionDelegate, UIContextMenuInteractionDelegate>

 {
    WeakObjCPtr<id<WKActionSheetAssistantDelegate>> _delegate;
    RetainPtr<WKActionSheet> _interactionSheet;
    RetainPtr<_WKActivatedElementInfo> _elementInfo;
    optional<WebKit::InteractionInformationAtPosition> _positionInformation;
    RetainPtr<UIContextMenuInteraction> _dataDetectorContextMenuInteraction;
    RetainPtr<UIContextMenuInteraction> _mediaControlsContextMenuInteraction;
    RetainPtr<UIMenu> _mediaControlsContextMenu;
    FloatRect _mediaControlsContextMenuTargetFrame;
    CompletionHandler<void (unsigned long long)> _mediaControlsContextMenuCallback;
    WeakObjCPtr<UIView> _view;
    BOOL _isPresentingDDUserInterface;
    BOOL _hasPendingActionSheet;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WKActionSheetAssistantDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL needsLinkIndicator; // ivar: _needsLinkIndicator
@property (readonly) Class superclass;


-(BOOL)_appendAppLinkOpenActionsForURL:(id)arg0 actions:(id)arg1 elementInfo:(id)arg2 ;
-(BOOL)hasContextMenuInteraction;
-(BOOL)isShowingSheet;
-(BOOL)presentSheet;
-(BOOL)synchronouslyRetrievePositionInformation;
-(NSInteger)_presentationStyleForPositionInfo:(*void)arg0 elementInfo:(id)arg1 ;
-(id)_contentsOfContextMenuItem:(id)arg0 ;
-(id)_contextMenuInteraction:(id)arg0 overrideSuggestedActionsForConfiguration:(id)arg1 ;
-(id)_contextMenuInteraction:(id)arg0 styleForMenuWithConfiguration:(id)arg1 ;
-(id)_elementActionForDDAction:(id)arg0 ;
-(id)_ensureDataDetectorContextMenuInteraction;
-(id)_ensureMediaControlsContextMenuInteraction;
-(id)_uiMenuElementsForMediaControlContextMenuItems:(*void)arg0 ;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForHighlightingMenuWithConfiguration:(id)arg1 ;
-(id)currentlyAvailableActionTitles;
-(id)currentlyAvailableMediaControlsContextMenuItems;
-(id)hostViewForSheet;
-(id)initWithView:(id)arg0 ;
-(id)suggestedActionsForContextMenuWithPositionInformation:(*void)arg0 ;
-(id)superviewForSheet;
-(struct CGRect )_presentationRectForSheetGivenPoint:(struct CGPoint )arg0 inHostView:(id)arg1 ;
-(struct CGRect )initialPresentationRectInHostViewForSheet;
-(struct CGRect )presentationRectForElementUsingClosestIndicatedRect;
-(struct CGRect )presentationRectForIndicatedElement;
-(struct CGRect )presentationRectInHostViewForSheet;
-(struct RetainPtr<NSArray<_WKElementAction *>> )defaultActionsForImageSheet:(id)arg0 ;
-(struct RetainPtr<NSArray<_WKElementAction *>> )defaultActionsForLinkSheet:(id)arg0 ;
-(struct optional<WebKit::InteractionInformationAtPosition> )currentPositionInformation;
-(void)_appendOpenActionsForURL:(id)arg0 actions:(id)arg1 elementInfo:(id)arg2 ;
-(void)_createSheetWithElementActions:(id)arg0 defaultTitle:(id)arg1 showLinkTitle:(BOOL)arg2 ;
-(void)_removeDataDetectorContextMenuInteraction;
-(void)_removeMediaControlsContextMenuInteraction;
-(void)cleanupSheet;
-(void)contextMenuInteraction:(id)arg0 willDisplayMenuForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg0 willEndForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)dealloc;
-(void)handleElementActionWithType:(NSInteger)arg0 element:(id)arg1 needsInteraction:(BOOL)arg2 ;
-(void)interactionDidStartWithPositionInformation:(*void)arg0 ;
-(void)showDataDetectorsUIForPositionInformation:(*void)arg0 ;
-(void)showImageSheet;
-(void)showLinkSheet;
-(void)showMediaControlsContextMenu:(struct FloatRect *)arg0 items:(*void)arg1 completionHandler:(*void)arg2 ;
-(void)updatePositionInformation;
-(void)updateSheetPosition;


@end


#endif
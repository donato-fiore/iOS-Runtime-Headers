// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXINTERACTIONCONTEXTMANAGER_H
#define SXINTERACTIONCONTEXTMANAGER_H

@class UITargetedPreview, NSString, NSMutableArray;
@protocol UIContextMenuInteractionDelegate, UIToolTipInteractionDelegate, SXInteractionContextManager, SXInteractionContextProviding, SXInteractionContextManagerDelegate;

#import <Foundation/Foundation.h>

#import "SXViewport.h"

@interface SXInteractionContextManager : NSObject <UIContextMenuInteractionDelegate, UIToolTipInteractionDelegate, SXInteractionContextManager>



@property (retain, nonatomic) UITargetedPreview *activePreview; // ivar: _activePreview
@property (retain, nonatomic) NSObject<SXInteractionContextProviding> *activeProvider; // ivar: _activeProvider
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SXInteractionContextManagerDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableArray *providers; // ivar: _providers
@property (readonly) Class superclass;
@property (readonly, nonatomic) SXViewport *viewport; // ivar: _viewport


-(BOOL)shouldStartPreviewing;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForDismissingMenuWithConfiguration:(id)arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForHighlightingMenuWithConfiguration:(id)arg1 ;
-(id)initWithViewport:(id)arg0 ;
-(id)toolTipInteraction:(id)arg0 toolTipAtPoint:(struct CGPoint )arg1 boundingRect:(struct CGRect *)arg2 ;
-(void)addProvider:(id)arg0 ;
-(void)contextMenuInteraction:(id)arg0 willCommitWithAnimator:(id)arg1 ;
-(void)contextMenuInteraction:(id)arg0 willEndForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteractionDidEnd:(id)arg0 ;
-(void)contextMenuInteractionWillPresent:(id)arg0 ;
-(void)didEndPreviewing;
-(void)registerOnView:(id)arg0 ;
-(void)willStartPreviewing;


@end


#endif
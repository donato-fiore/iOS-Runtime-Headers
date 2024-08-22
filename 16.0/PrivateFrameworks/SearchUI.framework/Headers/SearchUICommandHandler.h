// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUICOMMANDHANDLER_H
#define SEARCHUICOMMANDHANDLER_H

@class SFButtonItem, SFCommand, UIMenu, NSString, SFPunchout, NSItemProvider, UIViewController;
@protocol UIContextMenuInteractionDelegate;

#import <Foundation/Foundation.h>

#import "SearchUICommandEnvironment.h"
#import "SearchUIRowModel.h"

@interface SearchUICommandHandler : NSObject <UIContextMenuInteractionDelegate>



@property (readonly, nonatomic) id *actionProvider;
@property (retain) SFButtonItem *button; // ivar: _button
@property (retain) SFCommand *command; // ivar: _command
@property (readonly) UIMenu *contextMenu;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSString *defaultSymbolName; // ivar: _defaultSymbolName
@property (readonly) NSString *defaultTitle; // ivar: _defaultTitle
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger destination;
@property (readonly) SFPunchout *destinationPunchout; // ivar: _destinationPunchout
@property (retain) SearchUICommandEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (retain) NSItemProvider *itemProviderForCopy; // ivar: _itemProviderForCopy
@property (readonly) BOOL prefersContextMenu;
@property (readonly) BOOL prefersModalPresentation;
@property (retain) SearchUIRowModel *rowModel; // ivar: _rowModel
@property (readonly) Class superclass;
@property (readonly) BOOL supportsCopy;
@property (readonly) BOOL supportsShare;
@property (retain, nonatomic) UIViewController *viewController; // ivar: _viewController


+(BOOL)hasCustomViewControllerForRowModel:(id)arg0 environment:(id)arg1 ;
+(BOOL)hasValidHandlerForCommand:(id)arg0 rowModel:(id)arg1 environment:(id)arg2 ;
+(BOOL)hasValidHandlerForRowModel:(id)arg0 environment:(id)arg1 ;
+(id)fallbackCommandForRowModel:(id)arg0 environment:(id)arg1 ;
+(id)handlerForButton:(id)arg0 rowModel:(id)arg1 environment:(id)arg2 ;
+(id)handlerForCommand:(id)arg0 environment:(id)arg1 ;
+(id)handlerForCommand:(id)arg0 rowModel:(id)arg1 button:(id)arg2 environment:(id)arg3 ;
+(id)handlerForRowModel:(id)arg0 environment:(id)arg1 ;
+(id)previewHandlerForRowModel:(id)arg0 environment:(id)arg1 ;
+(id)revealHandlerForRowModel:(id)arg0 environment:(id)arg1 ;
+(id)tapCommandForRowModel:(id)arg0 environment:(id)arg1 ;
-(BOOL)shouldDeselectAfterExecution;
-(id)additionalActionMenuItems;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)createViewControllerForCommand:(id)arg0 environment:(id)arg1 ;
-(id)initWithCommand:(id)arg0 rowModel:(id)arg1 button:(id)arg2 environment:(id)arg3 ;
-(id)menuForRowModel:(id)arg0 buttonItem:(id)arg1 commandEnvironment:(id)arg2 ;
-(id)presentingViewControllerForEnvironment:(id)arg0 ;
-(id)sendFeedbackWithTriggerEvent:(NSUInteger)arg0 destination:(NSUInteger)arg1 punchout:(id)arg2 ;
-(void)didPreview;
-(void)executeWithTriggerEvent:(NSUInteger)arg0 ;
-(void)fetchShareableURLWithCompletionHandler:(id)arg0 ;
-(void)performCommand:(id)arg0 triggerEvent:(NSUInteger)arg1 environment:(id)arg2 ;
-(void)prepareViewController:(id)arg0 forTriggerEvent:(NSUInteger)arg1 ;
-(void)presentViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)requestAuthIfNecessaryAndPresentViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)showViewController:(id)arg0 ;
-(void)wasPerformedWithTriggerEvent:(NSUInteger)arg0 ;
-(void)wasPerformedWithTriggerEvent:(NSUInteger)arg0 punchout:(id)arg1 ;
-(void)wasPerformedWithTriggerEvent:(NSUInteger)arg0 punchout:(id)arg1 destination:(NSUInteger)arg2 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUICOLLECTIONPEEKDELEGATE_H
#define SEARCHUICOLLECTIONPEEKDELEGATE_H

@class NSString;
@protocol UIContextMenuInteractionDelegate;

#import <Foundation/Foundation.h>

#import "SearchUIPeekCommand.h"
#import "SearchUICollectionViewController.h"

@interface SearchUICollectionPeekDelegate : NSObject <UIContextMenuInteractionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SearchUIPeekCommand *peekCommand; // ivar: _peekCommand
@property (readonly) Class superclass;
@property (weak, nonatomic) SearchUICollectionViewController *viewController; // ivar: _viewController


-(id)_contextMenuInteraction:(id)arg0 styleForMenuWithConfiguration:(id)arg1 ;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForHighlightingMenuWithConfiguration:(id)arg1 ;
-(id)initWithViewController:(id)arg0 ;
-(void)contextMenuInteraction:(id)arg0 willDisplayMenuForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg0 willEndForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg0 willPerformPreviewActionForMenuWithConfiguration:(id)arg1 animator:(id)arg2 ;


@end


#endif
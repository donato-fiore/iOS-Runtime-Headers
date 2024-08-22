// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUICOLLECTIONPEEKDELEGATE_H
#define SEARCHUICOLLECTIONPEEKDELEGATE_H

@class NSString;
@protocol UIContextMenuInteractionDelegate;

#import <Foundation/Foundation.h>

#import "SearchUICollectionViewController.h"
#import "SearchUICommandHandler.h"

@interface SearchUICollectionPeekDelegate : NSObject <UIContextMenuInteractionDelegate>



@property (weak, nonatomic) SearchUICollectionViewController *collectionViewController; // ivar: _collectionViewController
@property (retain, nonatomic) SearchUICommandHandler *commandHandler; // ivar: _commandHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)menuConfigurationForCommandHandler:(id)arg0 ;
-(id)contextMenuInteraction:(id)arg0 configuration:(id)arg1 highlightPreviewForItemWithIdentifier:(id)arg2 ;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)initWithViewController:(id)arg0 ;
-(void)contextMenuInteraction:(id)arg0 willDisplayMenuForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg0 willEndForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg0 willPerformPreviewActionForMenuWithConfiguration:(id)arg1 animator:(id)arg2 ;


@end


#endif
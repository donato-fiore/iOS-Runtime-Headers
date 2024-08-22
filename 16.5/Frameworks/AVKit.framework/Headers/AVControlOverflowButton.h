// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCONTROLOVERFLOWBUTTON_H
#define AVCONTROLOVERFLOWBUTTON_H

@class UIContextMenuInteraction;
@protocol AVControlOverflowButtonDelegate;


#import "AVButton.h"

@interface AVControlOverflowButton : AVButton {
    UIContextMenuInteraction *_activeMenuInteraction;
}


@property (weak, nonatomic) NSObject<AVControlOverflowButtonDelegate> *delegate; // ivar: _delegate


+(id)firstGenerationButton;
+(id)secondGenerationButton;
-(id)_contextMenuInteraction:(id)arg0 styleForMenuWithConfiguration:(id)arg1 ;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(void)contextMenuInteraction:(id)arg0 willDisplayMenuForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg0 willEndForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)updateContextMenu;


@end


#endif
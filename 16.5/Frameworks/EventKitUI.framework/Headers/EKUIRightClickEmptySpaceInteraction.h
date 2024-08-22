// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKUIRIGHTCLICKEMPTYSPACEINTERACTION_H
#define EKUIRIGHTCLICKEMPTYSPACEINTERACTION_H

@class NSString, UIContextMenuInteraction, UIView;
@protocol UIContextMenuInteractionDelegate, UIInteraction, EKUIRightClickEmptySpaceInteractionDelegate;

#import <Foundation/Foundation.h>


@interface EKUIRightClickEmptySpaceInteraction : NSObject <UIContextMenuInteractionDelegate, UIInteraction>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<EKUIRightClickEmptySpaceInteractionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIContextMenuInteraction *interaction; // ivar: _interaction
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) UIView *view;


+(id)localizedPasteStringForEventCount:(NSUInteger)arg0 includeHere:(BOOL)arg1 ;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)didMoveToView:(id)arg0 ;
-(void)willMoveToView:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIFINDINTERACTION_H
#define _UIFINDINTERACTION_H

@class NSString;
@protocol UIFindInteractionDelegate, UIInteraction, _UITextSearching;

#import <Foundation/Foundation.h>

#import "UIView.h"
#import "UIFindInteraction.h"

@interface _UIFindInteraction : NSObject <UIFindInteractionDelegate, UIInteraction>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isFindNavigatorVisible) BOOL findNavigatorVisible;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *replacementText;
@property (copy, nonatomic) NSString *searchText;
@property (weak, nonatomic) NSObject<_UITextSearching> *searchableObject; // ivar: _searchableObject
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) UIView *view; // ivar: _view
@property (retain, nonatomic) UIFindInteraction *wrappedFindInteraction; // ivar: _wrappedFindInteraction


-(id)findInteraction:(id)arg0 sessionForView:(id)arg1 ;
-(id)init;
-(void)didMoveToView:(id)arg0 ;
-(void)dismissFindNavigator;
-(void)findInteraction:(id)arg0 didBeginFindSession:(id)arg1 ;
-(void)findInteraction:(id)arg0 didEndFindSession:(id)arg1 ;
-(void)findNext;
-(void)findPrevious;
-(void)presentFindNavigatorShowingReplace:(BOOL)arg0 ;
-(void)willMoveToView:(id)arg0 ;


@end


#endif
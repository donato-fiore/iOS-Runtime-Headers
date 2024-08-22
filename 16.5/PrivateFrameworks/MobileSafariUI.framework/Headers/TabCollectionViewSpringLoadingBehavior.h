// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TABCOLLECTIONVIEWSPRINGLOADINGBEHAVIOR_H
#define TABCOLLECTIONVIEWSPRINGLOADINGBEHAVIOR_H

@class NSString;
@protocol UISpringLoadedInteractionBehavior, UISpringLoadedInteractionEffect, TabCollectionView><TabCollectionViewDragDropSupport;

#import <Foundation/Foundation.h>


@interface TabCollectionViewSpringLoadingBehavior : NSObject <UISpringLoadedInteractionBehavior, UISpringLoadedInteractionEffect>

 {
    id<UISpringLoadedInteractionBehavior> *_behavior;
    id<UISpringLoadedInteractionEffect> *_effect;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<TabCollectionView><TabCollectionViewDragDropSupport> *tabView; // ivar: _tabView


+(void)addSpringLoadedInteractionToTabView:(id)arg0 ;
-(BOOL)shouldAllowInteraction:(id)arg0 withContext:(id)arg1 ;
-(id)init;
-(void)interaction:(id)arg0 didChangeWithContext:(id)arg1 ;
-(void)interactionDidFinish:(id)arg0 ;


@end


#endif
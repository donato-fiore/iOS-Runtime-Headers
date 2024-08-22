// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDASHBOARDPASSMESSAGEPRESENTER_H
#define PKDASHBOARDPASSMESSAGEPRESENTER_H

@class NSMutableArray, UIScrollView, NSString;
@protocol PKDashboardMessagesViewDelegate, PKDashboardItemPresenter;

#import <Foundation/Foundation.h>

#import "PKPassGroupView.h"
#import "PKDashboardMessagesView.h"

@interface PKDashboardPassMessagePresenter : NSObject <PKDashboardMessagesViewDelegate, PKDashboardItemPresenter>

 {
    PKPassGroupView *_groupView;
    PKDashboardMessagesView *_sampleMessageView;
    NSMutableArray *_tablesViews;
    UIScrollView *_scrollView;
    NSUInteger _currentIndex;
    NSString *_currentIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(Class)itemClass;
-(NSUInteger)_indexForIdentifier:(id)arg0 inMessages:(id)arg1 ;
-(id)_identifierForItem:(id)arg0 ;
-(id)cellForItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)collectionViewCellClasses;
-(id)initWithPassGroupView:(id)arg0 ;
-(struct CGSize )sizeForItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_configureCell:(id)arg0 forItem:(id)arg1 inCollectionView:(id)arg2 forIndexPath:(id)arg3 ;
-(void)didSelectItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 navigationController:(id)arg3 canPresent:(id)arg4 ;
-(void)messagesView:(id)arg0 scrolledToMessageWithIdentifier:(id)arg1 ;
-(void)traitCollectionDidChangeFromTrait:(id)arg0 toTrait:(id)arg1 inCollectionView:(id)arg2 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;


@end


#endif
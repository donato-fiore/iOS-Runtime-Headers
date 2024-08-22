// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUARTICLEBARBUTTONITEMMANAGER_H
#define NUARTICLEBARBUTTONITEMMANAGER_H

@class UIBarButtonItem, UIViewController;
@protocol NUArticleBarButtonItemManagerDelegate;

#import <Foundation/Foundation.h>

#import "NUArticleNextButton.h"

@interface NUArticleBarButtonItemManager : NSObject

@property (weak, nonatomic) NSObject<NUArticleBarButtonItemManagerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIBarButtonItem *doneBarButtonItem; // ivar: _doneBarButtonItem
@property (readonly, nonatomic) UIBarButtonItem *nextBarButtonItem; // ivar: _nextBarButtonItem
@property (readonly, nonatomic) NUArticleNextButton *nextButton; // ivar: _nextButton
@property (retain, nonatomic) UIBarButtonItem *shareBarButtonItem; // ivar: _shareBarButtonItem
@property (readonly, weak, nonatomic) UIViewController *viewController; // ivar: _viewController


-(id)createDoneBarButtonItem;
-(id)createFlexibleSpacerBarButtonItem;
-(id)createShareBarButtonItem;
-(id)initWithViewController:(id)arg0 ;
-(struct CGRect )adjustedFrameForDoneBarButtonItemForTraitCollection:(id)arg0 ;
-(struct CGRect )adjustedFrameForNextArticleButtonForTraitCollection:(id)arg0 ;
-(struct CGRect )adjustedFrameForShareBarButtonItemForTraitCollection:(id)arg0 ;
-(void)applyPageStyleToNextBarButtonItem:(id)arg0 ;
-(void)doDone:(id)arg0 ;
-(void)doNext:(id)arg0 ;
-(void)doShare:(id)arg0 ;
-(void)positionBarButtonItemsForTraitCollection:(id)arg0 ;
-(void)sizeBarButtonItemsForTraitCollection:(id)arg0 ;


@end


#endif
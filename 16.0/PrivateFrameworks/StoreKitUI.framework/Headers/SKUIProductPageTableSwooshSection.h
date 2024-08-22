// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIPRODUCTPAGETABLESWOOSHSECTION_H
#define SKUIPRODUCTPAGETABLESWOOSHSECTION_H

@class NSString, UIViewController;
@protocol SKUIMissingItemDelegate, SKUISwooshViewControllerDelegate;


#import "SKUIProductPageTableSection.h"
#import "SKUILockupSwooshArtworkLoader.h"
#import "SKUIMissingItemLoader.h"
#import "SKUISwooshPageComponent.h"
#import "SKUILockupSwooshViewController.h"
#import "SKUIColorScheme.h"
#import "SKUIResourceLoader.h"

@interface SKUIProductPageTableSwooshSection : SKUIProductPageTableSection <SKUIMissingItemDelegate, SKUISwooshViewControllerDelegate>

 {
    SKUILockupSwooshArtworkLoader *_artworkLoader;
    SKUIMissingItemLoader *_missingItemLoader;
    SKUISwooshPageComponent *_swooshComponent;
    SKUILockupSwooshViewController *_swooshViewController;
}


@property (copy, nonatomic) id *actionBlock; // ivar: _actionBlock
@property (retain, nonatomic) SKUIColorScheme *colorScheme;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SKUIResourceLoader *resourceLoader; // ivar: _resourceLoader
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIViewController *swooshViewController;


-(id)_artworkLoader;
-(id)_missingItemLoader;
-(id)headerViewForTableView:(id)arg0 ;
-(id)initWithItems:(id)arg0 title:(id)arg1 ;
-(id)initWithLockups:(id)arg0 title:(id)arg1 ;
-(id)swoosh:(id)arg0 imageForCellAtIndex:(NSInteger)arg1 ;
-(void)dealloc;
-(void)missingItemLoader:(id)arg0 didLoadItems:(id)arg1 invalidItemIdentifiers:(id)arg2 ;
-(void)swoosh:(id)arg0 didSelectCellAtIndex:(NSInteger)arg1 ;


@end


#endif
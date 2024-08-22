// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUISWOOSHVIEWCONTROLLER_H
#define SKUISWOOSHVIEWCONTROLLER_H

@class UIViewController;
@protocol SKUISwooshViewControllerDelegate;


#import "SKUIClientContext.h"
#import "SKUIColorScheme.h"

@interface SKUISwooshViewController : UIViewController

@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (copy, nonatomic) SKUIColorScheme *colorScheme; // ivar: _colorScheme
@property (weak, nonatomic) NSObject<SKUISwooshViewControllerDelegate> *delegate; // ivar: _delegate


-(id)indexPathsForVisibleItems;
-(id)popImageViewForItemAtIndex:(NSInteger)arg0 ;
-(struct CGRect )frameForItemAtIndex:(NSInteger)arg0 ;
-(void)deselectAllItems;
-(void)setImage:(id)arg0 forItemAtIndex:(NSInteger)arg1 ;
-(void)unhideImages;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKLAYOUTCARDVIEWCONTROLLER_H
#define MKLAYOUTCARDVIEWCONTROLLER_H

@class NSMutableDictionary;


#import "MKStackingViewController.h"
#import "MKMapItem.h"

@interface MKLayoutCardViewController : MKStackingViewController

@property (retain, nonatomic) NSMutableDictionary *cacheModuleType; // ivar: _cacheModuleType
@property (retain, nonatomic) NSMutableDictionary *cacheVC; // ivar: _cacheVC
@property (retain, nonatomic) MKMapItem *mapItem; // ivar: _mapItem


-(BOOL)isLayoutDynamic;
-(BOOL)isTransitItem;
-(id)_cachedViewControllerForModule:(int)arg0 ;
-(id)_createViewControllerForModule:(id)arg0 ;
-(id)_layoutModuleForMapItem;
-(void)_createModuleLayout:(id)arg0 ;


@end


#endif
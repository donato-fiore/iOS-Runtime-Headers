// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXELEMENTNAMESVIEW_H
#define AXELEMENTNAMESVIEW_H

@class NSMutableArray, NSArray;
@protocol OS_os_log;


#import "AXCyclingView.h"
#import "AXElementNamesStyleProvider.h"

@interface AXElementNamesView : AXCyclingView

@property (nonatomic) CGRect boundsForLastReload; // ivar: _boundsForLastReload
@property (readonly, nonatomic) NSMutableArray *containers; // ivar: _containers
@property (nonatomic) BOOL didUpdateItems; // ivar: _didUpdateItems
@property (retain, nonatomic) NSArray *items; // ivar: _items
@property (retain, nonatomic) NSObject<OS_os_log> *loggingFacility; // ivar: _loggingFacility
@property (retain, nonatomic) AXElementNamesStyleProvider *styleProvider; // ivar: _styleProvider


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewsInCycle;
-(void)_adjustLabelPositionForView:(id)arg0 toAvoidCollidingWithView:(id)arg1 ;
-(void)_arrangeNameViews:(id)arg0 withinContainer:(id)arg1 ;
-(void)_reloadViews;
-(void)layoutSubviews;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISTATUSBARREGIONAXESLAYOUT_H
#define _UISTATUSBARREGIONAXESLAYOUT_H

@class NSString, NSArray;
@protocol _UIStatusBarRegionLayout, _UIStatusBarRegionAxisLayout;

#import <Foundation/Foundation.h>

#import "_UIStatusBarRegion.h"

@interface _UIStatusBarRegionAxesLayout : NSObject <_UIStatusBarRegionLayout>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *displayItems; // ivar: _displayItems
@property (readonly, nonatomic) BOOL fitsAllItems;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *horizontalConstraints; // ivar: _horizontalConstraints
@property (retain, nonatomic) NSObject<_UIStatusBarRegionAxisLayout> *horizontalLayout; // ivar: _horizontalLayout
@property (copy, nonatomic) NSArray *layoutGuides; // ivar: _layoutGuides
@property (weak, nonatomic) _UIStatusBarRegion *region; // ivar: _region
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *verticalConstraints; // ivar: _verticalConstraints
@property (retain, nonatomic) NSObject<_UIStatusBarRegionAxisLayout> *verticalLayout; // ivar: _verticalLayout


-(BOOL)mayFitDisplayItems:(id)arg0 ;
-(void)_updateConstraints;
-(void)invalidate;


@end


#endif
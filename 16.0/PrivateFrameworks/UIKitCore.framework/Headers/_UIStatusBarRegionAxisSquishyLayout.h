// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISTATUSBARREGIONAXISSQUISHYLAYOUT_H
#define _UISTATUSBARREGIONAXISSQUISHYLAYOUT_H

@class NSString;
@protocol _UIStatusBarRegionAxisLayout;

#import <Foundation/Foundation.h>


@interface _UIStatusBarRegionAxisSquishyLayout : NSObject <_UIStatusBarRegionAxisLayout>



@property (nonatomic) NSInteger alignment; // ivar: _alignment
@property (readonly, nonatomic) BOOL canOverflowItems;
@property (nonatomic) BOOL compressItems; // ivar: _compressItems
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat interspace; // ivar: _interspace
@property (nonatomic) NSInteger maxNumberOfItems; // ivar: _maxNumberOfItems
@property (nonatomic) CGFloat minInterspace; // ivar: _minInterspace
@property (readonly) Class superclass;


-(BOOL)mayFitDisplayItems:(id)arg0 inContainerItem:(id)arg1 axis:(NSInteger)arg2 ;
-(id)constraintsForDisplayItems:(id)arg0 layoutGuides:(id)arg1 inContainerItem:(id)arg2 axis:(NSInteger)arg3 ;
-(id)init;


@end


#endif
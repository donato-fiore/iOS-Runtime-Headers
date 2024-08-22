// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISTATUSBARREGIONAXISALIGNINGLAYOUT_H
#define _UISTATUSBARREGIONAXISALIGNINGLAYOUT_H

@class NSString;
@protocol _UIStatusBarRegionAxisLayout;

#import <Foundation/Foundation.h>


@interface _UIStatusBarRegionAxisAligningLayout : NSObject <_UIStatusBarRegionAxisLayout>



@property (nonatomic) NSInteger alignment; // ivar: _alignment
@property (readonly, nonatomic) BOOL canOverflowItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)aligningLayoutWithAlignment:(NSInteger)arg0 ;
-(id)constraintsForDisplayItems:(id)arg0 layoutGuides:(id)arg1 inContainerItem:(id)arg2 axis:(NSInteger)arg3 ;


@end


#endif
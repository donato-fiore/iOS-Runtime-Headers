// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSAMPLEGADGET_H
#define PXSAMPLEGADGET_H

@class NSString, UIColor;
@protocol PXSampleGadgetViewDelegate, PXGadget, PXGadgetDelegate;

#import <Foundation/Foundation.h>

#import "PXGadgetSpec.h"

@interface PXSampleGadget : NSObject <PXSampleGadgetViewDelegate, PXGadget>



@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (nonatomic) NSUInteger accessoryButtonType; // ivar: _accessoryButtonType
@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXGadgetDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL expanded; // ivar: _expanded
@property (readonly, nonatomic) NSUInteger gadgetCapabilities;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec; // ivar: _gadgetSpec
@property (copy, nonatomic) NSString *gadgetTitle; // ivar: _gadgetTitle
@property (readonly, nonatomic) NSUInteger gadgetType;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger headerStyle;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (nonatomic) NSUInteger preferredExpandedHeight; // ivar: _preferredExpandedHeight
@property (nonatomic) NSUInteger preferredHeight; // ivar: _preferredHeight
@property (nonatomic) NSInteger priority; // ivar: _priority
@property (readonly) Class superclass;
@property (nonatomic) CGRect visibleContentRect;


-(id)init;
-(id)initWithMininumHeight:(CGFloat)arg0 ;
-(struct CGRect )view:(id)arg0 colorFrameForBounds:(struct CGRect )arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_prepareView:(id)arg0 ;
-(void)prepareCollectionViewItem:(id)arg0 ;
-(void)userDidSelectAccessoryButton:(id)arg0 ;


@end


#endif
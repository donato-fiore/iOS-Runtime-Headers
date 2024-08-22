// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXFORYOUFOOTERGADGET_H
#define PXFORYOUFOOTERGADGET_H

@class NSString;
@protocol PXGadget, PXGadgetDelegate;

#import <Foundation/Foundation.h>

#import "PXPhotosGlobalFooterView.h"
#import "PXGadgetSpec.h"

@interface PXForYouFooterGadget : NSObject <PXGadget>



@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) NSUInteger accessoryButtonType;
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXGadgetDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PXPhotosGlobalFooterView *footerView; // ivar: _footerView
@property (readonly, nonatomic) NSUInteger gadgetCapabilities;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec; // ivar: _gadgetSpec
@property (readonly, nonatomic) NSUInteger gadgetType;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger headerStyle;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (nonatomic) NSInteger priority;
@property (readonly) Class superclass;
@property (nonatomic) CGRect visibleContentRect;


-(id)contentView;
-(id)initWithViewModel:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;


@end


#endif
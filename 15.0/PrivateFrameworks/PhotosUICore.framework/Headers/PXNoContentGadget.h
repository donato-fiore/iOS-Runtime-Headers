// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXNOCONTENTGADGET_H
#define PXNOCONTENTGADGET_H

@class NSString;
@protocol PXGadget, PXGadgetDelegate;

#import <Foundation/Foundation.h>

#import "PXGadgetSpec.h"
#import "PXNoContentGadgetView.h"

@interface PXNoContentGadget : NSObject <PXGadget>



@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) NSUInteger accessoryButtonType;
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (nonatomic) CGFloat contentHeightAdjustment; // ivar: _contentHeightAdjustment
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXGadgetDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger gadgetCapabilities;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec; // ivar: _gadgetSpec
@property (readonly, nonatomic) NSUInteger gadgetType;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger headerStyle;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (readonly, nonatomic) CGFloat minimumContentHeight; // ivar: _minimumContentHeight
@property (retain, nonatomic) PXNoContentGadgetView *noContentView; // ivar: _noContentView
@property (nonatomic) NSInteger priority; // ivar: _priority
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) CGRect visibleContentRect;


-(BOOL)hasLoadedContentData;
-(CGFloat)preferredHeightForViewController:(id)arg0 ;
-(id)init;
-(id)initWithLocalizedTitle:(id)arg0 localizedMessage:(id)arg1 ;
-(id)initWithLocalizedTitle:(id)arg0 localizedMessage:(id)arg1 minimumContentHeight:(CGFloat)arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)configureWithButtonTitle:(id)arg0 buttonAction:(id)arg1 ;
-(void)prepareCollectionViewItem:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGADGETSECTIONHEADER_H
#define PXGADGETSECTIONHEADER_H

@class UIFont, UIImage, NSString;
@protocol PXMutableGadgetSectionHeader;


#import "PXObservable.h"
#import "PXGadgetSpec.h"

@interface PXGadgetSectionHeader : PXObservable <PXMutableGadgetSectionHeader>



@property (copy, nonatomic) id *accessoryButtonPressed; // ivar: _accessoryButtonPressed
@property (readonly, nonatomic) UIFont *buttonFont;
@property (readonly, nonatomic) UIImage *buttonImage;
@property (readonly, nonatomic) NSString *buttonTitle;
@property (nonatomic) NSUInteger buttonType; // ivar: _buttonType
@property (copy, nonatomic) NSString *customButtonTitle; // ivar: _customButtonTitle
@property (readonly, nonatomic) UIEdgeInsets edgeInsets; // ivar: _edgeInsets
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec; // ivar: _gadgetSpec
@property (readonly, nonatomic) UIFont *headerFont;
@property (readonly, nonatomic) CGFloat headerHeight;
@property (nonatomic) NSUInteger headerStyle; // ivar: _headerStyle
@property (readonly, nonatomic) NSString *headerTitle; // ivar: _headerTitle
@property (nonatomic) BOOL isFirstSection; // ivar: _isFirstSection
@property (readonly, nonatomic) BOOL shouldShowAccessoryButton;
@property (readonly, nonatomic) BOOL shouldShowDivider;
@property (nonatomic) BOOL shouldShowDividerOnFirstSection; // ivar: _shouldShowDividerOnFirstSection
@property (readonly, nonatomic) CGFloat titleBottomSpacing;
@property (readonly, nonatomic) CGFloat titleHeight;
@property (readonly, nonatomic) CGFloat titleTopSpacing;
@property (readonly, nonatomic) BOOL wantsMultilineTitle; // ivar: _wantsMultilineTitle


+(id)_buttonImageNameForButtonType:(NSUInteger)arg0 ;
+(id)buttonFontForButtonType:(NSUInteger)arg0 ;
+(id)buttonImageForButtonType:(NSUInteger)arg0 ;
+(id)titleFontForHeaderStyle:(NSUInteger)arg0 ;
-(id)initWithConfigurationBlock:(id)arg0 ;
-(id)initWithGadget:(id)arg0 ;
-(void)_configureWithGadget:(id)arg0 ;
-(void)performChanges:(id)arg0 ;
-(void)performChangesWithGadget:(id)arg0 additionalChanges:(id)arg1 ;


@end


#endif
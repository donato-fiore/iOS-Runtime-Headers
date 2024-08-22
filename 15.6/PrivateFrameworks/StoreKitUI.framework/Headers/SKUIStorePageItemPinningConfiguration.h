// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUISTOREPAGEITEMPINNINGCONFIGURATION_H
#define SKUISTOREPAGEITEMPINNINGCONFIGURATION_H


#import <Foundation/Foundation.h>


@interface SKUIStorePageItemPinningConfiguration : NSObject

@property (readonly, nonatomic) BOOL hasValidPinningContentInset; // ivar: _hasValidPinningContentInset
@property (readonly, nonatomic) BOOL hasValidPinningGroup; // ivar: _hasValidPinningGroup
@property (readonly, nonatomic) BOOL hasValidPinningStyle; // ivar: _hasValidPinningStyle
@property (readonly, nonatomic) BOOL hasValidPinningTransitionStyle; // ivar: _hasValidPinningTransitionStyle
@property (nonatomic) UIEdgeInsets pinningContentInset; // ivar: _pinningContentInset
@property (nonatomic) NSInteger pinningGroup; // ivar: _pinningGroup
@property (nonatomic) NSInteger pinningStyle; // ivar: _pinningStyle
@property (nonatomic) NSInteger pinningTransitionStyle; // ivar: _pinningTransitionStyle


-(void)invalidatePinningContentInset;
-(void)invalidatePinningGroup;
-(void)invalidatePinningStyle;
-(void)invalidatePinningTransitionStyle;


@end


#endif
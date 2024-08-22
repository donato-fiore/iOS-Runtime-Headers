// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIDOCUMENTUICONFIGURATION_H
#define VUIDOCUMENTUICONFIGURATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VUIDocumentUIConfiguration : NSObject

@property (nonatomic, getter=isAnimated) BOOL animated; // ivar: _animated
@property (nonatomic, getter=isInteractivePopGestureAllowed) BOOL isInteractivePopGestureAllowed; // ivar: _isInteractivePopGestureAllowed
@property (nonatomic, getter=isNavigationBarAdjustedToSizeClass) BOOL navigationBarAdjustedToSizeClass; // ivar: _navigationBarAdjustedToSizeClass
@property (nonatomic, getter=isNavigationBarHidden) BOOL navigationBarHidden; // ivar: _navigationBarHidden
@property (nonatomic) BOOL supportsDeclarativeUI; // ivar: _supportsDeclarativeUI
@property (nonatomic) BOOL supportsInAppBanner; // ivar: _supportsInAppBanner
@property (nonatomic) NSInteger type; // ivar: _type
@property (copy, nonatomic) NSString *viewControllerDocumentIdentifier; // ivar: _viewControllerDocumentIdentifier
@property (copy, nonatomic) NSString *viewControllerIdentifier; // ivar: _viewControllerIdentifier


+(NSInteger)_presentationTypeFromString:(id)arg0 ;
+(id)uiConfigurationWithDict:(id)arg0 ;
+(struct CGSize )_preferredSizeFromConfig:(id)arg0 ;


@end


#endif
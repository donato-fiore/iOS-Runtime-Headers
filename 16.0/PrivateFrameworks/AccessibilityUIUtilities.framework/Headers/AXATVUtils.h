// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXATVUTILS_H
#define AXATVUTILS_H


#import <Foundation/Foundation.h>


@interface AXATVUtils : NSObject



+(id)sharedInstance;
-(BOOL)isProcessTVAppStore;
-(BOOL)isTVMLKitLoaded;
-(id)accessibilityIdentifierForResourceURL:(id)arg0 ;
-(id)accessibilityLabelForID:(id)arg0 ;
-(id)accessibilityLabelForResourceURL:(id)arg0 ;
-(id)atvaccessibilityLocalizedNameForBundleID:(id)arg0 ;
-(id)atvaccessibilityLocalizedString:(id)arg0 ;
-(id)currentFocusedView;


@end


#endif
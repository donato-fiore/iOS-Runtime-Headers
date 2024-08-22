// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSEXTENSIONSANALYTICSEVENTCOALESCER_H
#define WBSEXTENSIONSANALYTICSEVENTCOALESCER_H

@class NSMutableSet, NSTimer, NSString;
@protocol WBSExtensionsAnalyticsEventCoalescerDelegate;

#import <Foundation/Foundation.h>


@interface WBSExtensionsAnalyticsEventCoalescer : NSObject <WBSExtensionsAnalyticsEventCoalescerDelegate>

 {
    NSMutableSet *_injectedScriptExtensions;
    NSMutableSet *_buttonInvokedExtensions;
    os_unfair_lock_s _lock;
    NSTimer *_resetTimer;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WBSExtensionsAnalyticsEventCoalescerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat resetInterval; // ivar: _resetInterval
@property (readonly) Class superclass;


-(BOOL)didInjectScriptForExtensionWithIdentifier:(id)arg0 ;
-(BOOL)didInvokeToolbarButtonForExtensionWithIdentifier:(id)arg0 ;
-(id)init;
-(void)_configureResetTimer;
-(void)extensionAnalyticsEventCoalescer:(id)arg0 didInjectScriptForExtensionWithIdentifier:(id)arg1 ;
-(void)extensionAnalyticsEventCoalescer:(id)arg0 didInvokeToolbarButtonForExtensionWithIdentifier:(id)arg1 ;


@end


#endif
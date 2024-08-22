// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NCWIDGETEXTENSIONCONTEXT_H
#define _NCWIDGETEXTENSIONCONTEXT_H

@class NSExtensionContext;


#import "_NCWidgetViewController.h"

@interface _NCWidgetExtensionContext : NSExtensionContext {
    CGSize _maxCompactSize;
    CGSize _maxExpandedSize;
}


@property (nonatomic, getter=_activeDisplayMode, setter=_setActiveDisplayMode:) NSInteger activeDisplayMode; // ivar: _activeDisplayMode
@property (weak, nonatomic, getter=_hostViewController, setter=_setHostViewController:) _NCWidgetViewController *hostViewController; // ivar: _hostViewController
@property (nonatomic, getter=_largestAvailableDisplayMode, setter=_setLargestAvailableDisplayMode:) NSInteger largestAvailableDisplayMode; // ivar: _largestAvailableDisplayMode


-(BOOL)widgetIsForeground;
-(NSInteger)widgetActiveDisplayMode;
-(NSInteger)widgetLargestAvailableDisplayMode;
-(id)initWithInputItems:(id)arg0 listenerEndpoint:(id)arg1 contextUUID:(id)arg2 ;
-(struct CGSize )_maximumSizeForDisplayMode:(NSInteger)arg0 ;
-(struct CGSize )widgetMaximumSizeForDisplayMode:(NSInteger)arg0 ;
-(void)_setMaximumSize:(struct CGSize )arg0 forDisplayMode:(NSInteger)arg1 ;
-(void)openURL:(id)arg0 completion:(id)arg1 ;
-(void)openURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)setWidgetLargestAvailableDisplayMode:(NSInteger)arg0 ;


@end


#endif
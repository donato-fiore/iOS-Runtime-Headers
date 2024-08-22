// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISTATUSBARSERVER_H
#define UISTATUSBARSERVER_H

@protocol UIStatusBarServerClient;

#import <Foundation/Foundation.h>


@interface UIStatusBarServer : NSObject {
    *__CFRunLoopSource _source;
}


@property (retain, nonatomic) NSObject<UIStatusBarServerClient> *statusBar; // ivar: _statusBar


+(BOOL)getGlowAnimationStateForStyle:(NSInteger)arg0 ;
+(CGFloat)getGlowAnimationEndTimeForStyle:(NSInteger)arg0 ;
+(NSUInteger)getStyleOverrides;
+(char *)serviceName;
+(id)_cachedTimeStringFromData:(struct ? *)arg0 ;
+(id)getDoubleHeightStatusStringForStyle:(NSInteger)arg0 ;
+(struct ? *)getStatusBarData;
+(struct ? *)getStatusBarOverrideData;
+(unsigned int)_publisherPort;
+(unsigned int)_serverPort;
+(void)_updateStatusBarDataAnimated:(BOOL)arg0 ;
+(void)addStatusBarItem:(int)arg0 ;
+(void)addStyleOverrides:(NSUInteger)arg0 ;
+(void)permanentizeStatusBarOverrideData;
+(void)postDoubleHeightStatusString:(id)arg0 forStyle:(NSInteger)arg1 ;
+(void)postGlowAnimationState:(BOOL)arg0 forStyle:(NSInteger)arg1 ;
+(void)postStatusBarData:(struct ? *)arg0 withActions:(int)arg1 ;
+(void)postStatusBarOverrideData:(struct ? *)arg0 ;
+(void)removeStatusBarItem:(int)arg0 ;
+(void)removeStyleOverrides:(NSUInteger)arg0 ;
+(void)runServer;
-(id)initWithStatusBar:(id)arg0 ;
-(void)_receivedStatusBarData:(struct ? *)arg0 actions:(int)arg1 animated:(BOOL)arg2 ;
-(void)_receivedStyleOverrides:(NSUInteger)arg0 ;
-(void)dealloc;


@end


#endif
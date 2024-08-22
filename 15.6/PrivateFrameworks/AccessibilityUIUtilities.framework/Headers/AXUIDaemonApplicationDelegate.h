// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXUIDAEMONAPPLICATIONDELEGATE_H
#define AXUIDAEMONAPPLICATIONDELEGATE_H

@class FBSOrientationObserver, NSString, UIWindow;
@protocol UIApplicationDelegate;

#import <Foundation/Foundation.h>


@interface AXUIDaemonApplicationDelegate : NSObject <UIApplicationDelegate>

 {
    FBSOrientationObserver *_orientationObserver;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIWindow *window; // ivar: window


+(BOOL)isFeatureEnabled;
+(id)debugFeatureName;
+(id)featureEnabledStatusDidChangeNotification;
+(id)loggingFacility;
-(BOOL)application:(id)arg0 didFinishLaunchingWithOptions:(id)arg1 ;
-(id)init;
-(void)_didUpdateToOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)_enabledPreferenceDidChange:(id)arg0 ;
-(void)_exitIfNotEnabled;
-(void)_setKeepAlive:(BOOL)arg0 ;
-(void)_systemAppDidBecomeReady;
-(void)applicationWillTerminate:(id)arg0 ;
-(void)dealloc;
-(void)didFinishLaunching;
-(void)didUpdateOrientation;
-(void)willTerminate;


@end


#endif
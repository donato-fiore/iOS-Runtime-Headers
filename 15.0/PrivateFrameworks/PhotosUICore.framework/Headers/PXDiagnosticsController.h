// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXDIAGNOSTICSCONTROLLER_H
#define PXDIAGNOSTICSCONTROLLER_H

@class NSArray, UITapGestureRecognizer, UIWindow, NSString;
@protocol PXSettingsKeyObserver, UIGestureRecognizerDelegate;

#import <Foundation/Foundation.h>


@interface PXDiagnosticsController : NSObject <PXSettingsKeyObserver, UIGestureRecognizerDelegate>



@property (readonly, nonatomic) NSArray *_diagnosticsServicesClasses; // ivar: __diagnosticsServicesClasses
@property (retain, nonatomic, setter=_setGestureRecognizer:) UITapGestureRecognizer *_gestureRecognizer; // ivar: __gestureRecognizer
@property (readonly, nonatomic) UIWindow *_window; // ivar: __window
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedController;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(id)_currentRootViewController;
-(id)consoleDescriptionForServices:(id)arg0 ;
-(id)currentItemProviders;
-(id)servicesWithItemProviders:(id)arg0 ;
-(void)_executeService:(id)arg0 ;
-(void)_handleGestureRecognizer:(id)arg0 ;
-(void)_loadDiagnosticsServicesClasses;
-(void)_presentContextualViewControllerFromPoint:(struct CGPoint )arg0 inCoordinateSpace:(id)arg1 ;
-(void)_updateGestureRecognizer;
-(void)presentContextualDiagnostics;
-(void)presentContextualViewControllerForServices:(id)arg0 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)setupOnInternalDevicesWithWindow:(id)arg0 ;


@end


#endif
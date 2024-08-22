// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SBUIWIDGETVIEWCONTROLLER_H
#define _SBUIWIDGETVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol _SBUIWidgetHost;



@interface _SBUIWidgetViewController : UIViewController <_SBUIWidgetHost>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGSize preferredViewSize;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<_SBUIWidgetHost> *widgetHost; // ivar: _widgetHost
@property (copy, nonatomic) NSString *widgetIdentifier; // ivar: _widgetIdentifier


-(void)hostDidDismiss;
-(void)hostDidPresent;
-(void)hostWillDismiss;
-(void)hostWillPresent;
-(void)invalidatePreferredViewSize;
-(void)requestLaunchOfURL:(id)arg0 ;
-(void)setVisibleWidgetsIDs:(id)arg0 ;


@end


#endif
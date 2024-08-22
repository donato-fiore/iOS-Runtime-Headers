// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRCOMPLICATIONSSNAPSHOTVIEWCONTROLLER_H
#define PRCOMPLICATIONSSNAPSHOTVIEWCONTROLLER_H

@class UIViewController, FBSScene, NSMutableDictionary, UIView, NSArray, NSString, BSUIVibrancyConfiguration;
@protocol BSInvalidatable, PRComplicationDisplaying;



@interface PRComplicationsSnapshotViewController : UIViewController <BSInvalidatable, PRComplicationDisplaying>

 {
    FBSScene *_scene;
    NSMutableDictionary *_widgetViewControllersByUniqueIdentifier;
    UIView *_touchBlockingView;
}


@property (retain, nonatomic) NSArray *complicationDescriptors; // ivar: _complicationDescriptors
@property (nonatomic, getter=isComplicationUserInteractionEnabled) BOOL complicationUserInteractionEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) BSUIVibrancyConfiguration *vibrancyConfiguration; // ivar: _vibrancyConfiguration


-(id)_hostViewControllerForComplicationDescriptor:(id)arg0 ;
-(id)initWithComplicationDescriptors:(id)arg0 ;
-(id)initWithScene:(id)arg0 complicationLayoutProvider:(id)arg1 ;
-(void)_updateTintParametersForWidgetHostViewController:(id)arg0 ;
-(void)complicationsDidEndDisplaying;
-(void)complicationsWillDisplay;
-(void)invalidate;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRINLINECOMPLICATIONSNAPSHOTVIEWCONTROLLER_H
#define PRINLINECOMPLICATIONSNAPSHOTVIEWCONTROLLER_H

@class UIViewController, FBSScene, CHUISWidgetHostViewController, UIView, NSString, BSUIVibrancyConfiguration;
@protocol BSInvalidatable, PRComplicationDisplaying;


#import "PRComplicationDescriptor.h"

@interface PRInlineComplicationSnapshotViewController : UIViewController <BSInvalidatable, PRComplicationDisplaying>

 {
    FBSScene *_scene;
    CHUISWidgetHostViewController *_hostViewController;
    UIView *_touchBlockingView;
}


@property (retain, nonatomic) PRComplicationDescriptor *complicationDescriptor; // ivar: _complicationDescriptor
@property (nonatomic, getter=isComplicationUserInteractionEnabled) BOOL complicationUserInteractionEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) BSUIVibrancyConfiguration *vibrancyConfiguration; // ivar: _vibrancyConfiguration


-(id)_hostViewControllerForComplicationDescriptor:(id)arg0 ;
-(id)initWithComplicationDescriptor:(id)arg0 ;
-(id)initWithScene:(id)arg0 complicationLayoutProvider:(id)arg1 ;
-(void)complicationsDidEndDisplaying;
-(void)complicationsWillDisplay;
-(void)invalidate;
-(void)viewDidLoad;


@end


#endif
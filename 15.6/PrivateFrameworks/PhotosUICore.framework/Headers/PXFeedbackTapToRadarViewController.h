// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXFEEDBACKTAPTORADARVIEWCONTROLLER_H
#define PXFEEDBACKTAPTORADARVIEWCONTROLLER_H

@class UINavigationController, NSString, NSArray;
@protocol _PXFeedbackTapToRadarViewControllerDelegate;


#import "_PXFeedbackTapToRadarViewController.h"

@interface PXFeedbackTapToRadarViewController : UINavigationController <_PXFeedbackTapToRadarViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _PXFeedbackTapToRadarViewController *feedbackViewController; // ivar: _feedbackViewController
@property (copy, nonatomic) id *fileRadarHandler; // ivar: _fileRadarHandler
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL requestScreenshotPermission; // ivar: _requestScreenshotPermission
@property (copy, nonatomic) NSArray *routes; // ivar: _routes
@property (copy, nonatomic) NSString *routesDescription; // ivar: _routesDescription
@property (readonly) Class superclass;


-(BOOL)shouldRequestScreenshotPermission;
-(id)availableRoutes;
-(id)availableRoutesDescription;
-(id)init;
-(void)didSelectFileRadarButtonWithScreenshotAllowed:(BOOL)arg0 attachDiagnose:(BOOL)arg1 selectedRoute:(id)arg2 ;


@end


#endif
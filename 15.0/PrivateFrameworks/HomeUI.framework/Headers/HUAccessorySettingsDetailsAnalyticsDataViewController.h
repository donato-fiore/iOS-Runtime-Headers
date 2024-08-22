// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUACCESSORYSETTINGSDETAILSANALYTICSDATAVIEWCONTROLLER_H
#define HUACCESSORYSETTINGSDETAILSANALYTICSDATAVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol HUAccessorySettingsDetailsViewControllerProtocol;



@interface HUAccessorySettingsDetailsAnalyticsDataViewController : UIViewController <HUAccessorySettingsDetailsViewControllerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)hu_preloadContent;
-(id)initWithAccessoryGroupItem:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif
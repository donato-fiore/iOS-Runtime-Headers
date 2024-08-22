// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSOURCEINGESTSETTINGSVIEWCONTROLLER_H
#define HKSOURCEINGESTSETTINGSVIEWCONTROLLER_H

@class HKIngestSettingsViewController, HKSource;



@interface HKSourceIngestSettingsViewController : HKIngestSettingsViewController {
    HKSource *_source;
}




-(id)initWithHealthStore:(id)arg0 displayTypeController:(id)arg1 source:(id)arg2 useInsetStyling:(BOOL)arg3 ;
-(void)viewDidLoad;


@end


#endif
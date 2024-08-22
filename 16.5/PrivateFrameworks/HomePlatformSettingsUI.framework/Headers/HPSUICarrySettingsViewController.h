// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HPSUICARRYSETTINGSVIEWCONTROLLER_H
#define HPSUICARRYSETTINGSVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol _TtP22HomePlatformSettingsUI28CarrySettingsClientInterface_;


#import "_HPSUICarrySettingsViewController.h"

@interface HPSUICarrySettingsViewController : UIViewController <_TtP22HomePlatformSettingsUI28CarrySettingsClientInterface_>



@property (retain, nonatomic) NSString *homeID; // ivar: _homeID
@property (retain, nonatomic) _HPSUICarrySettingsViewController *internalVC; // ivar: _internalVC


+(void)shouldShowCarrySettingsButtonForHomeID:(id)arg0 withCompletion:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHomeID:(id)arg0 ;
-(void)configureInternalVC;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setBackgroundColorIfNeeded;
-(void)viewDidLoad;


@end


#endif
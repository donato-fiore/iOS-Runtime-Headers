// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HPSUIBETAENROLLMENTVIEWCONTROLLER_H
#define HPSUIBETAENROLLMENTVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol _TtP22HomePlatformSettingsUI29BetaEnrollmentClientInterface_;


#import "_HPSUIBetaEnrollmentViewController.h"

@interface HPSUIBetaEnrollmentViewController : UIViewController <_TtP22HomePlatformSettingsUI29BetaEnrollmentClientInterface_>



@property (retain, nonatomic) NSString *homeID; // ivar: _homeID
@property (retain, nonatomic) _HPSUIBetaEnrollmentViewController *internalVC; // ivar: _internalVC


+(void)shouldShowBetaEnrollmentButtonForHomeID:(id)arg0 withCompletion:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHomeID:(id)arg0 ;
-(void)configureInternalVC;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setBackgroundColorIfNeeded;
-(void)viewDidLoad;


@end


#endif
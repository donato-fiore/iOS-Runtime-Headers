// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBUSERALERTVIEWCONTROLLER_H
#define DBUSERALERTVIEWCONTROLLER_H

@class UIViewController, URTAlert;


#import "DBEnvironmentConfiguration.h"

@interface DBUserAlertViewController : UIViewController

@property (readonly, nonatomic) URTAlert *alert; // ivar: _alert
@property (readonly, nonatomic) id *dismissHandler; // ivar: _dismissHandler
@property (readonly, nonatomic) DBEnvironmentConfiguration *environmentConfiguration; // ivar: _environmentConfiguration


-(id)initWithAlert:(id)arg0 environmentConfiguration:(id)arg1 ;
-(void)loadView;


@end


#endif
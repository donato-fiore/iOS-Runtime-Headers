// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSINSTALLEDAPPSVALIDATION_H
#define TPSINSTALLEDAPPSVALIDATION_H



#import "TPSTargetingValidation.h"
#import "TPSInstalledAppInfo.h"

@interface TPSInstalledAppsValidation : TPSTargetingValidation

@property (retain, nonatomic) TPSInstalledAppInfo *appInfo; // ivar: _appInfo


-(id)description;
-(id)initWithInstalledAppInfo:(id)arg0 ;
-(void)validateWithCompletion:(id)arg0 ;


@end


#endif
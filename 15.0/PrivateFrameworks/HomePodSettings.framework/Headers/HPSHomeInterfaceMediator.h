// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HPSHOMEINTERFACEMEDIATOR_H
#define HPSHOMEINTERFACEMEDIATOR_H

@class NSString;
@protocol HPSHomeSettingInterface;

#import <Foundation/Foundation.h>

#import "HPSHomeInterface.h"

@interface HPSHomeInterfaceMediator : NSObject <HPSHomeSettingInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) HPSHomeInterface *settingsInterface; // ivar: _settingsInterface
@property (readonly) Class superclass;


-(id)initWithInterface:(id)arg0 ;
-(void)accessoryUpdatedForAttribute:(id)arg0 withContext:(id)arg1 completion:(id)arg2 ;
-(void)homeKitAccessorySettingValueChangedForKeyPath:(id)arg0 settingValue:(id)arg1 completion:(id)arg2 ;


@end


#endif
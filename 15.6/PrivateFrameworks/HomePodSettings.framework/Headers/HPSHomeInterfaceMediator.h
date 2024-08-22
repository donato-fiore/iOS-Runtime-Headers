// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
-(void)accessoryDidUpdateAttribute:(id)arg0 withContext:(id)arg1 ;
-(void)deviceDidUpdateSetting:(id)arg0 withValue:(id)arg1 ;


@end


#endif
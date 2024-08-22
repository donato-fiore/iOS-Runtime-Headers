// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLOUDSETTINGSDISPATCHINGMEDIATOR_H
#define CLOUDSETTINGSDISPATCHINGMEDIATOR_H

@class NSMutableDictionary;
@protocol CloudSettingsMediator;

#import <Foundation/Foundation.h>


@interface CloudSettingsDispatchingMediator : NSObject <CloudSettingsMediator>



@property BOOL dispatchSettersOnMain; // ivar: _dispatchSettersOnMain
@property (retain) NSMutableDictionary *keysMap; // ivar: _keysMap


-(id)deviceSettingsForKeys:(id)arg0 ;
-(id)init;
-(id)mergeSettings:(id)arg0 ;
-(void)applySettings:(id)arg0 ;
-(void)registerKey:(id)arg0 getter:(SEL)arg1 setter:(SEL)arg2 ;
-(void)registerKey:(id)arg0 getter:(SEL)arg1 setter:(SEL)arg2 merger:(SEL)arg3 type:(id)arg4 ;
-(void)registerKeys;


@end


#endif
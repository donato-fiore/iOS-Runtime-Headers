// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSETTINGSMANAGER_H
#define CLSETTINGSMANAGER_H

@class NSString;
@protocol CLSettingsManagerProtocol;


#import "CLSettingsManagerInternal.h"

@interface CLSettingsManager : CLSettingsManagerInternal <CLSettingsManagerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) id *notificationObserver; // ivar: _notificationObserver
@property (readonly) Class superclass;
@property (nonatomic) BOOL valid;


-(id)init;
-(id)syncgetSetValue:(id)arg0 forKey:(id)arg1 withoutNotifying:(id)arg2 ;
-(void)beginService;
-(void)endService;
-(void)refresh;


@end


#endif
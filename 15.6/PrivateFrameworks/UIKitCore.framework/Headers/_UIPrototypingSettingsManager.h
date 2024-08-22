// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIPROTOTYPINGSETTINGSMANAGER_H
#define _UIPROTOTYPINGSETTINGSMANAGER_H

@class NSArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _UIPrototypingSettingsManager : NSObject

@property (readonly, nonatomic) NSArray *allSettings;
@property (retain, nonatomic) NSMutableDictionary *storedSettings; // ivar: _storedSettings


+(id)sharedManager;
-(id)init;
-(id)settingOfType:(NSInteger)arg0 withName:(id)arg1 ;
-(void)deleteAllStoredSettings;
-(void)synchronizeStoredSettings;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDSETTINGONCHANGEATTACHEDUPDATESRESULT_H
#define HMDSETTINGONCHANGEATTACHEDUPDATESRESULT_H

@class HMFObject, NSArray;



@interface HMDSettingOnChangeAttachedUpdatesResult : HMFObject

@property (readonly) NSArray *modelsToUpdate; // ivar: _modelsToUpdate
@property (readonly) id *onCommitCompletion; // ivar: _onCommitCompletion
@property (readonly) NSArray *settingsToUpdate; // ivar: _settingsToUpdate


-(id)initWithSettingsToUpdate:(id)arg0 models:(id)arg1 onCommitCompletion:(id)arg2 ;


@end


#endif
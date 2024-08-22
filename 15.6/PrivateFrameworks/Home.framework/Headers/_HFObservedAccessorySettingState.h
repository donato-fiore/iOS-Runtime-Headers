// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HFOBSERVEDACCESSORYSETTINGSTATE_H
#define _HFOBSERVEDACCESSORYSETTINGSTATE_H

@class NSString, NSSet, HMSetting, HMSettings;
@protocol NAIdentifiable;

#import <Foundation/Foundation.h>


@interface _HFObservedAccessorySettingState : NSObject <NAIdentifiable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSSet *selectionOptions; // ivar: _selectionOptions
@property (readonly, nonatomic) HMSetting *setting; // ivar: _setting
@property (readonly, nonatomic) HMSettings *settings; // ivar: _settings
@property (readonly) Class superclass;


+(id)na_identity;
+(id)stateWithSettings:(id)arg0 forSetting:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithSettings:(id)arg0 setting:(id)arg1 ;


@end


#endif
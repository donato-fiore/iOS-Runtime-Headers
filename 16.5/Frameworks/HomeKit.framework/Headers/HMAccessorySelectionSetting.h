// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMACCESSORYSELECTIONSETTING_H
#define HMACCESSORYSELECTIONSETTING_H

@class NSString, NSArray;
@protocol _HMAccesorySettingDelegate;


#import "HMAccessorySetting.h"

@interface HMAccessorySelectionSetting : HMAccessorySetting <_HMAccesorySettingDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSArray *items;
@property (readonly) Class superclass;


-(id)initWithInternal:(id)arg0 ;
-(id)initWithKey:(id)arg0 properties:(NSUInteger)arg1 value:(id)arg2 ;
-(id)initWithKey:(id)arg0 properties:(NSUInteger)arg1 value:(id)arg2 items:(id)arg3 ;
-(void)_setting:(id)arg0 didAddConstraint:(id)arg1 ;
-(void)addItem:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeItem:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateValue:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HPSDISABLEASSISTANT_H
#define HPSDISABLEASSISTANT_H

@class NSString;
@protocol HPAccessorySettingListenerDelegate;

#import <Foundation/Foundation.h>


@interface HPSDisableAssistant : NSObject <HPAccessorySettingListenerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)notifyDidUpdateSetting:(id)arg0 forKeyPath:(id)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSPWIDGETRELEVANTSHORTCUTDONOR_H
#define HDSPWIDGETRELEVANTSHORTCUTDONOR_H

@class INRelevantShortcutStore;
@protocol HDSPWidgetRelevanceDonor;

#import <Foundation/Foundation.h>


@interface HDSPWidgetRelevantShortcutDonor : NSObject <HDSPWidgetRelevanceDonor>

 {
    INRelevantShortcutStore *_store;
}




-(id)init;
-(void)_setRelevantShortcuts:(id)arg0 ;
-(void)donateRelevanceForWidgetState:(NSInteger)arg0 ;


@end


#endif
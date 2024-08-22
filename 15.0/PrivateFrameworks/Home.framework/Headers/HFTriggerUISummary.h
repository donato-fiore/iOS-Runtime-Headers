// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFTRIGGERUISUMMARY_H
#define HFTRIGGERUISUMMARY_H

@class NSString, NSArray;
@protocol HFIconDescriptor;

#import <Foundation/Foundation.h>


@interface HFTriggerUISummary : NSObject

@property (readonly, nonatomic) NSString *triggerDescription; // ivar: _triggerDescription
@property (readonly, nonatomic) NSString *triggerDisplayTitle; // ivar: _triggerDisplayTitle
@property (readonly, nonatomic) NSObject<HFIconDescriptor> *triggerIconDescriptor; // ivar: _triggerIconDescriptor
@property (readonly, nonatomic) NSString *triggerName; // ivar: _triggerName
@property (readonly, nonatomic) BOOL triggerNameIsConfigured; // ivar: _triggerNameIsConfigured
@property (readonly, nonatomic) NSString *triggerNaturalLanguageTitle; // ivar: _triggerNaturalLanguageTitle
@property (readonly, nonatomic) NSArray *triggerSummaryIconDescriptors; // ivar: _triggerSummaryIconDescriptors
@property (readonly, nonatomic) NSString *triggerTitle; // ivar: _triggerTitle
@property (readonly, nonatomic) NSUInteger triggerType; // ivar: _triggerType


-(id)initWithTrigger:(id)arg0 inHome:(id)arg1 forceDisabled:(BOOL)arg2 ;
-(id)initWithTrigger:(id)arg0 inHome:(id)arg1 forceDisabled:(BOOL)arg2 ignoringDisabled:(BOOL)arg3 ;
-(void)_getTriggerName:(id)arg0 home:(id)arg1 ;
-(void)_updateWithTrigger:(id)arg0 inHome:(id)arg1 forceDisabled:(BOOL)arg2 ignoringDisabled:(BOOL)arg3 ;


@end


#endif
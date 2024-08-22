// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUCONTROLPANELFILTERRULE_H
#define HUCONTROLPANELFILTERRULE_H

@class NSString;
@protocol HUControlPanelRule;

#import <Foundation/Foundation.h>


@interface HUControlPanelFilterRule : NSObject <HUControlPanelRule>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *filter; // ivar: _filter
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat priority; // ivar: _priority
@property (readonly) Class superclass;


+(id)ruleWithFilter:(id)arg0 ;
-(BOOL)ruleMatchesItem:(id)arg0 ;
-(id)initWithFilter:(id)arg0 ;


@end


#endif
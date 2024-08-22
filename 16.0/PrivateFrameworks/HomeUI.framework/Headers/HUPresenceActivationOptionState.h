// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUPRESENCEACTIVATIONOPTIONSTATE_H
#define HUPRESENCEACTIVATIONOPTIONSTATE_H

@class HFTransformItemProvider;

#import <Foundation/Foundation.h>

#import "HUPresenceActivationOptionItem.h"

@interface HUPresenceActivationOptionState : NSObject

@property (readonly, nonatomic) NSUInteger activationGranularity;
@property (readonly, nonatomic) HUPresenceActivationOptionItem *activationOptionItem; // ivar: _activationOptionItem
@property (nonatomic, getter=isExpanded) BOOL expanded; // ivar: _expanded
@property (nonatomic, getter=isSelected) BOOL selected;
@property (readonly, nonatomic) HFTransformItemProvider *userOptionItemProvider; // ivar: _userOptionItemProvider


-(id)init;
-(id)initWithUserOptionItemProvider:(id)arg0 activationOptionItem:(id)arg1 ;


@end


#endif
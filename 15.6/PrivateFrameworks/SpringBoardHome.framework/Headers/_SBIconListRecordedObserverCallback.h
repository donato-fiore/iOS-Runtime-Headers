// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SBICONLISTRECORDEDOBSERVERCALLBACK_H
#define _SBICONLISTRECORDEDOBSERVERCALLBACK_H

@class NSArray, NSString;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "SBIcon.h"

@interface _SBIconListRecordedObserverCallback : NSObject <BSDescriptionProviding>



@property (copy, nonatomic) NSArray *addedIcons; // ivar: _addedIcons
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *movedIcons; // ivar: _movedIcons
@property (copy, nonatomic) NSArray *removedIcons; // ivar: _removedIcons
@property (retain, nonatomic) SBIcon *replacedIcon; // ivar: _replacedIcon
@property (retain, nonatomic) SBIcon *replacementIcon; // ivar: _replacementIcon
@property (readonly) Class superclass;


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif
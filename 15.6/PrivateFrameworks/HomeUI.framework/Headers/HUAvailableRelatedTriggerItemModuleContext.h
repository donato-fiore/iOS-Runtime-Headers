// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUAVAILABLERELATEDTRIGGERITEMMODULECONTEXT_H
#define HUAVAILABLERELATEDTRIGGERITEMMODULECONTEXT_H

@class NSString, NSNumber;
@protocol HUAvailableRelatedTriggerItemModuleContextProviding;

#import <Foundation/Foundation.h>


@interface HUAvailableRelatedTriggerItemModuleContext : NSObject <HUAvailableRelatedTriggerItemModuleContextProviding>



@property (retain, nonatomic) NSString *analyticsPresentationContext; // ivar: _analyticsPresentationContext
@property (nonatomic) BOOL commitsAutomatically; // ivar: _commitsAutomatically
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSNumber *defaultActiveValue; // ivar: _defaultActiveValue
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger engineOptions; // ivar: _engineOptions
@property (nonatomic) NSUInteger errorHandlingStrategy; // ivar: _errorHandlingStrategy
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidesAddAutomationItem; // ivar: _hidesAddAutomationItem
@property (nonatomic) BOOL hidesCustomTriggers; // ivar: _hidesCustomTriggers
@property (nonatomic) BOOL itemsAreEditable; // ivar: _itemsAreEditable
@property (nonatomic) BOOL showNaturalLightingItem; // ivar: _showNaturalLightingItem
@property (nonatomic) BOOL showsIcons; // ivar: _showsIcons
@property (readonly) Class superclass;


-(id)init;
-(id)initWithContext:(id)arg0 ;


@end


#endif
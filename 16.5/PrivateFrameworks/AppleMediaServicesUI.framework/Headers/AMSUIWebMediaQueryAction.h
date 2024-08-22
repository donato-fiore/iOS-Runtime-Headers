// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIWEBMEDIAQUERYACTION_H
#define AMSUIWEBMEDIAQUERYACTION_H

@class NSArray, NSNumber;


#import "AMSUIWebAction.h"

@interface AMSUIWebMediaQueryAction : AMSUIWebAction

@property (retain, nonatomic) NSArray *bundleIDs; // ivar: _bundleIDs
@property (retain, nonatomic) NSNumber *observing; // ivar: _observing
@property (retain, nonatomic) NSArray *storeItemIDs; // ivar: _storeItemIDs


-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;
-(id)runAction;


@end


#endif
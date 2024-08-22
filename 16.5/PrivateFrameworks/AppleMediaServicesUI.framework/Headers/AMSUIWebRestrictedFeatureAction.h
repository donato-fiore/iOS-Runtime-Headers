// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIWEBRESTRICTEDFEATUREACTION_H
#define AMSUIWEBRESTRICTEDFEATUREACTION_H

@class NSNumber, NSString;


#import "AMSUIWebAction.h"

@interface AMSUIWebRestrictedFeatureAction : AMSUIWebAction

@property (retain, nonatomic) NSNumber *enabled; // ivar: _enabled
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier


-(id)_featureWithIdentifier:(id)arg0 ;
-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;
-(id)runAction;


@end


#endif
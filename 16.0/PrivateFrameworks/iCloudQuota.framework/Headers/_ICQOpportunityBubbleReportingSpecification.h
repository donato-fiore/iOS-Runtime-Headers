// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ICQOPPORTUNITYBUBBLEREPORTINGSPECIFICATION_H
#define _ICQOPPORTUNITYBUBBLEREPORTINGSPECIFICATION_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface _ICQOpportunityBubbleReportingSpecification : NSObject

@property (retain, nonatomic) NSDictionary *dimissServerParam; // ivar: _dimissServerParam
@property (nonatomic) NSUInteger dismissRuleType; // ivar: _dismissRuleType
@property (nonatomic) BOOL displayRuleServerAlwaysShow; // ivar: _displayRuleServerAlwaysShow
@property (nonatomic) NSUInteger displayRuleType; // ivar: _displayRuleType


-(id)_getDismissReportingRuleFromServerDict:(id)arg0 ;
-(id)initWithServerDictionary:(id)arg0 ;
-(void)_setDisplayRuleFromServerDict:(id)arg0 ;


@end


#endif
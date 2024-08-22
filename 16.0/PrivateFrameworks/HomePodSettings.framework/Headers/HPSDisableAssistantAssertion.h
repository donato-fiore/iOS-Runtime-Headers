// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HPSDISABLEASSISTANTASSERTION_H
#define HPSDISABLEASSISTANTASSERTION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "HPSAssertion.h"

@interface HPSDisableAssistantAssertion : NSObject

@property (retain, nonatomic) HPSAssertion *assertion; // ivar: _assertion
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier


-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 connectionProvider:(id)arg1 ;
-(void)dealloc;


@end


#endif
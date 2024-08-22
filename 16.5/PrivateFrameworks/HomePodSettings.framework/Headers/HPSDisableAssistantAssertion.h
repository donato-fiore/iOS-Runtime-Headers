// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HPSDISABLEASSISTANTASSERTION_H
#define HPSDISABLEASSISTANTASSERTION_H

@class NSString;
@protocol HPSAssertionProtocol;

#import <Foundation/Foundation.h>

#import "HPSAssertion.h"

@interface HPSDisableAssistantAssertion : NSObject <HPSAssertionProtocol>



@property (retain, nonatomic) HPSAssertion *assertion; // ivar: _assertion
@property (readonly, copy, nonatomic) NSString *identifier;


+(id)label;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 connectionProvider:(id)arg1 ;
-(void)dealloc;


@end


#endif
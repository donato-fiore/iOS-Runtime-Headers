// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMPOWERASSERTION_H
#define IMPOWERASSERTION_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface IMPowerAssertion : NSObject {
    unsigned int _assertion;
    NSString *_identifier;
    NSDictionary *_properties;
}




-(id)description;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 timeout:(CGFloat)arg1 ;
-(id)initWithIdentifier:(id)arg0 timeoutSec:(CGFloat)arg1 properties:(id)arg2 ;
-(void)dealloc;


@end


#endif
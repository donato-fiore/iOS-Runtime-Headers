// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CPPOWERASSERTION_H
#define _CPPOWERASSERTION_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface _CPPowerAssertion : NSObject {
    unsigned int _assertion;
    NSString *_identifier;
    NSArray *_stack;
}


@property (nonatomic) CGFloat timeout; // ivar: _timeout


-(id)initWithIdentifier:(id)arg0 timeout:(CGFloat)arg1 ;
-(void)dealloc;
-(void)timedout;


@end


#endif
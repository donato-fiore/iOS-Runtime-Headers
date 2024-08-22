// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBBASESTATUSBARCHANGEASSERTION_H
#define SBBASESTATUSBARCHANGEASSERTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SBBaseStatusBarChangeAssertion : NSObject

@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason


-(id)_initWithReason:(id)arg0 ;
-(id)description;
-(id)init;
-(void)invalidate;


@end


#endif
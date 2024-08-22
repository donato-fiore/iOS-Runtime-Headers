// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSASSERTION_H
#define SBSASSERTION_H

@class BSMachPortReceiveRight, NSString;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>


@interface SBSAssertion : NSObject <BSInvalidatable>

 {
    BSMachPortReceiveRight *_receiveRight;
}


@property (readonly, copy, nonatomic) NSString *assertionName; // ivar: _assertionName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason
@property (readonly) Class superclass;


-(id)init;
-(id)initWithAssertionName:(id)arg0 reason:(id)arg1 port:(unsigned int)arg2 ;
-(id)initWithAssertionName:(id)arg0 reason:(id)arg1 receiveRight:(id)arg2 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif
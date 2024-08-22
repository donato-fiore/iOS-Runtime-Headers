// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHFORCEACTIVEATTRIBUTEENTRY_H
#define BLSHFORCEACTIVEATTRIBUTEENTRY_H

@class BLSAttribute, NSString;
@protocol BLSHLocalAssertionAttributeHandlerEntry, BLSAssertionServiceResponding, BLSHAssertionAttributeHandlerService;

#import <Foundation/Foundation.h>


@interface BLSHForceActiveAttributeEntry : NSObject <BLSHLocalAssertionAttributeHandlerEntry>



@property (readonly, weak, nonatomic) NSObject<BLSAssertionServiceResponding> *assertion; // ivar: _assertion
@property (readonly, weak, nonatomic) BLSAttribute *attribute; // ivar: _attribute
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<BLSHAssertionAttributeHandlerService> *service; // ivar: _service
@property (readonly) Class superclass;


+(id)activateForAttribute:(id)arg0 fromAssertion:(id)arg1 forService:(id)arg2 attributeHandler:(id)arg3 ;
-(BOOL)reactivateIfPossible;
-(id)initForAttribute:(id)arg0 fromAssertion:(id)arg1 forService:(id)arg2 ;
-(void)invalidate;


@end


#endif
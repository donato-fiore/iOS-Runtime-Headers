// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHLOCALASSERTIONATTRIBUTEHANDLER_H
#define BLSHLOCALASSERTIONATTRIBUTEHANDLER_H

@class NSMutableDictionary, NSString;
@protocol BLSHAssertionAttributeHandler;

#import <Foundation/Foundation.h>

#import "BLSHLocalAssertionService.h"

@interface BLSHLocalAssertionAttributeHandler : NSObject <BLSHAssertionAttributeHandler>

 {
    NSMutableDictionary *_entries;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) BLSHLocalAssertionService *service; // ivar: _service
@property (readonly) Class superclass;


+(Class)attributeBaseClass;
+(Class)entryClass;
+(id)attributeClasses;
+(id)registerHandlerForService:(id)arg0 ;
-(id)initForService:(id)arg0 ;
-(void)activateAttributes:(id)arg0 fromAssertion:(id)arg1 forService:(id)arg2 ;
-(void)deactivateAttributes:(id)arg0 fromAssertion:(id)arg1 forService:(id)arg2 ;
-(void)setupService;


@end


#endif
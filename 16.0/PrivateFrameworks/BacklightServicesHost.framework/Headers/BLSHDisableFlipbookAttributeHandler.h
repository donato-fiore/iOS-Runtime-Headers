// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSHDISABLEFLIPBOOKATTRIBUTEHANDLER_H
#define BLSHDISABLEFLIPBOOKATTRIBUTEHANDLER_H

@protocol BLSHDisableFlipbookProvider;


#import "BLSHLocalCountingAssertionAttributeHandler.h"

@interface BLSHDisableFlipbookAttributeHandler : BLSHLocalCountingAssertionAttributeHandler {
    id<BLSHDisableFlipbookProvider> *_provider;
}




+(Class)attributeBaseClass;
+(id)attributeClasses;
+(id)registerHandlerForService:(id)arg0 provider:(id)arg1 ;
-(void)activateWithFirstEntry:(id)arg0 ;
-(void)deactivateWithFinalEntry:(id)arg0 ;


@end


#endif
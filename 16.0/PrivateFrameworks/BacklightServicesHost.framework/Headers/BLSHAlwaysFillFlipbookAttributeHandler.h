// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSHALWAYSFILLFLIPBOOKATTRIBUTEHANDLER_H
#define BLSHALWAYSFILLFLIPBOOKATTRIBUTEHANDLER_H

@protocol BLSHAlwaysFillFlipbookProvider;


#import "BLSHLocalCountingAssertionAttributeHandler.h"

@interface BLSHAlwaysFillFlipbookAttributeHandler : BLSHLocalCountingAssertionAttributeHandler {
    id<BLSHAlwaysFillFlipbookProvider> *_provider;
}




+(Class)attributeBaseClass;
+(id)attributeClasses;
+(id)registerHandlerForService:(id)arg0 provider:(id)arg1 ;
-(id)initForService:(id)arg0 provider:(id)arg1 ;
-(void)activateWithFirstEntry:(id)arg0 ;
-(void)deactivateWithFinalEntry:(id)arg0 ;


@end


#endif
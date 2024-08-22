// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHDISABLEBACKLIGHTWATCHDOGSATTRIBUTEHANDLER_H
#define BLSHDISABLEBACKLIGHTWATCHDOGSATTRIBUTEHANDLER_H



#import "BLSHLocalCountingAssertionAttributeHandler.h"
#import "BLSHWatchdogProvider.h"

@interface BLSHDisableBacklightWatchdogsAttributeHandler : BLSHLocalCountingAssertionAttributeHandler {
    BLSHWatchdogProvider *_provider;
}




+(Class)attributeBaseClass;
+(id)attributeClasses;
+(id)registerHandlerForService:(id)arg0 provider:(id)arg1 ;
-(id)initForService:(id)arg0 provider:(id)arg1 ;
-(void)activateWithFirstEntry:(id)arg0 ;
-(void)deactivateWithFinalEntry:(id)arg0 ;


@end


#endif
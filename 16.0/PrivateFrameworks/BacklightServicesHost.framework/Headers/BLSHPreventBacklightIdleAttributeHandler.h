// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSHPREVENTBACKLIGHTIDLEATTRIBUTEHANDLER_H
#define BLSHPREVENTBACKLIGHTIDLEATTRIBUTEHANDLER_H



#import "BLSHLocalCountingAssertionAttributeHandler.h"
#import "BLSHBacklightIdleProvider.h"

@interface BLSHPreventBacklightIdleAttributeHandler : BLSHLocalCountingAssertionAttributeHandler {
    os_unfair_lock_s _lock;
    BOOL _active;
}


@property (readonly, weak, nonatomic) BLSHBacklightIdleProvider *provider; // ivar: _provider


+(Class)attributeBaseClass;
+(id)attributeClasses;
+(id)registerHandlerForService:(id)arg0 provider:(id)arg1 ;
-(NSInteger)typeForEntry:(id)arg0 ;
-(id)countingTargetForEntry:(id)arg0 ;
-(id)initForService:(id)arg0 provider:(id)arg1 ;
-(void)activate:(BOOL)arg0 withEntry:(id)arg1 ;
-(void)activateWithFirstEntry:(id)arg0 ;
-(void)deactivateWithFinalEntry:(id)arg0 ;


@end


#endif
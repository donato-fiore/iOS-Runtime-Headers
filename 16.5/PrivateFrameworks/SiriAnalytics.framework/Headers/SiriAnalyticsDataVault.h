// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRIANALYTICSDATAVAULT_H
#define SIRIANALYTICSDATAVAULT_H


#import <Foundation/Foundation.h>


@interface SiriAnalyticsDataVault : NSObject {
    ? containingDirectory;
}




-(id)init;
-(id)vendAccessFor:(NSInteger)arg0 withEntitlements:(id)arg1 auditToken:(struct ? )arg2 readonly:(BOOL)arg3 error:(*id)arg4 ;
-(void)migrate;


@end


#endif
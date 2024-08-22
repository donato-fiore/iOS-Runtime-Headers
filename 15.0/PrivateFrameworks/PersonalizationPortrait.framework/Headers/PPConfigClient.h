// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPCONFIGCLIENT_H
#define PPCONFIGCLIENT_H


#import <Foundation/Foundation.h>

#import "PPXPCClientHelper.h"

@interface PPConfigClient : NSObject {
    PPXPCClientHelper *_clientHelper;
}




+(id)sharedInstance;
-(NSUInteger)assetVersionWithError:(*id)arg0 ;
-(id)_synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)init;
-(id)readableTrialTreatmentsMappingWithError:(*id)arg0 ;
-(id)variantNameWithError:(*id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPRPRIMER_H
#define SPRPRIMER_H

@class NSURL, NSDictionary;


#import "SPRObject.h"
#import "SPRProvider.h"

@interface SPRPrimer : SPRObject {
    NSInteger _providerPredicate;
    SPRProvider *_provider;
}


@property (readonly, copy) NSURL *attestationBackendURL;
@property (readonly, copy) NSDictionary *configuration;
@property (readonly, copy) NSURL *configuratorBackendURL;
@property (readonly, nonatomic) BOOL isProduction; // ivar: _isProduction
@property (readonly, copy) NSURL *monitoringBackendURL;
@property (readonly, getter=getProvider) SPRProvider *provider;
@property (readonly, copy) NSURL *storageURL;


+(id)primerWithConfiguration:(id)arg0 error:(*id)arg1 ;
+(id)shared;
-(BOOL)configureWithConfiguration:(id)arg0 error:(*id)arg1 ;
-(BOOL)isRequired;
-(id)attestationManagerAndReturnError:(*id)arg0 ;
-(id)initWithConfiguration:(id)arg0 error:(*id)arg1 ;
-(id)monitorManagerAndReturnError:(*id)arg0 ;
-(id)persistenceFactoryAndReturnError:(*id)arg0 ;
-(id)providerAndReturnError:(*id)arg0 ;
-(id)secureChannelWithName:(id)arg0 error:(*id)arg1 ;


@end


#endif
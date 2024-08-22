// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPRCONFIGURATOR_H
#define SPRCONFIGURATOR_H

@class NSData;
@protocol SPRSubject;

#import <Foundation/Foundation.h>


@interface SPRConfigurator : NSObject <SPRSubject>

 {
    ? version;
    ? isInstallInProgress;
    ? footprint;
    ? provider;
    ? attestation;
    ? backend;
    ? timeKeeper;
    ? caLogger;
    ? persistentMemoryThreshold;
    ? corMemoryThreshold;
    ? codMemoryThreshold;
}


@property (nonatomic, readonly) NSData *footprint;


-(id)init;
-(id)installWithToken:(id)arg0 error:(*id)arg1 ;
-(id)installWithToken:(id)arg0 force:(BOOL)arg1 error:(*id)arg2 ;
-(id)prepare:(*id)arg0 ;
-(id)prepareWithForce:(BOOL)arg0 error:(*id)arg1 ;
-(id)statusAndReturnError:(*id)arg0 ;
-(id)statusWithToken:(id)arg0 error:(*id)arg1 ;
-(id)statusWithToken:(id)arg0 options:(NSInteger)arg1 error:(*id)arg2 ;
-(void)dealloc;
-(void)installAsyncWithToken:(id)arg0 callback:(id)arg1 ;
-(void)installAsyncWithToken:(id)arg0 force:(BOOL)arg1 callback:(id)arg2 ;


@end


#endif
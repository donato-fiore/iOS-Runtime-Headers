// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRICACHEDELETECALLBACKS_H
#define TRICACHEDELETECALLBACKS_H

@class TRIClient;
@protocol TRIPaths, TRIAssetPurging;

#import <Foundation/Foundation.h>


@interface TRICacheDeleteCallbacks : NSObject {
    id<TRIPaths> *_paths;
    id<TRIAssetPurging> *_assetPurger;
    TRIClient *_loggingClient;
}




+(id)_assetPurger:(id)arg0 loggingClient:(id)arg1 ;
+(void)registerCallbacksWithPaths:(id)arg0 loggingClient:(id)arg1 ;
-(BOOL)_trialVolumeIsEqualToVolume:(id)arg0 ;
-(id)initWithPaths:(id)arg0 assetPurger:(id)arg1 loggingClient:(id)arg2 ;
-(id)purge:(id)arg0 urgency:(int)arg1 ;
-(id)purgeable:(id)arg0 urgency:(int)arg1 ;
-(void)_logPurgedAmountTelemetry:(int)arg0 purgedAmountInBytes:(id)arg1 ;
-(void)cancel:(id)arg0 ;


@end


#endif
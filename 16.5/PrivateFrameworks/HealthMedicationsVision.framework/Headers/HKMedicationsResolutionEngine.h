// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMEDICATIONSRESOLUTIONENGINE_H
#define HKMEDICATIONSRESOLUTIONENGINE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HKMedicationsResolver.h"

@interface HKMedicationsResolutionEngine : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) HKMedicationsResolver *resolver; // ivar: _resolver


+(BOOL)isVisionAssetAvailable;
-(id)hkctl_resolveMedicationsUsing:(id)arg0 resultLimit:(NSInteger)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithAssetUrl:(id)arg0 ;
-(void)filter:(id)arg0 transcripts:(id)arg1 criterion:(float)arg2 limit:(NSInteger)arg3 completionHandler:(id)arg4 ;
-(void)resolveMedicationsUsing:(id)arg0 resultLimit:(NSInteger)arg1 completionHandler:(id)arg2 ;


@end


#endif
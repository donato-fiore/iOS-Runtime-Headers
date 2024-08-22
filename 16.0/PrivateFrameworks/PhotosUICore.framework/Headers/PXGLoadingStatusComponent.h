// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGLOADINGSTATUSCOMPONENT_H
#define PXGLOADINGSTATUSCOMPONENT_H

@class NSMutableDictionary;
@protocol PXGMutableLoadingStatusComponent;


#import "PXGComponent.h"

@interface PXGLoadingStatusComponent : PXGComponent <PXGMutableLoadingStatusComponent>

 {
    NSMutableDictionary *_errorByEntity;
}


@property (readonly, nonatomic) *? mutableStates;
@property (readonly, nonatomic) *? states;


+(BOOL)shouldDiffForChanges;
+(NSUInteger)elementSize;
-(id)errorForEntity:(struct ? )arg0 ;
-(id)initWithDataStore:(id)arg0 ;
-(struct ? )stateForEntity:(struct ? )arg0 ;
-(void)performChanges:(id)arg0 ;
-(void)setError:(id)arg0 forEntity:(struct ? )arg1 ;
-(void)setState:(struct ? )arg0 forEntities:(struct ? *)arg1 count:(NSUInteger)arg2 ;
-(void)setState:(struct ? )arg0 forEntity:(struct ? )arg1 ;
-(void)willDestroyEntities:(struct ? *)arg0 count:(NSInteger)arg1 ;


@end


#endif
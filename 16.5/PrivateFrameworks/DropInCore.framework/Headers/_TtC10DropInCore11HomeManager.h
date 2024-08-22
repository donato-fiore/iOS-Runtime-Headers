// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC10DROPINCORE11HOMEMANAGER_H
#define _TTC10DROPINCORE11HOMEMANAGER_H

@class NSArray, HMAccessory, HMHome;
@protocol DICHomeManagerProviding;

#import <Foundation/Foundation.h>


@interface _TtC10DropInCore11HomeManager : NSObject <DICHomeManagerProviding>

 {
    ? manager;
    ? serialQueue;
    ? homesLoadedHandlers;
    ? delegatesToQueues;
}


@property (nonatomic, readonly) NSArray *allHomes;
@property (nonatomic, readonly) HMAccessory *currentAccessory;
@property (nonatomic, readonly) HMHome *currentHome;
@property (nonatomic) BOOL homesLoaded; // ivar: homesLoaded


-(id)init;
-(void)addDelegate:(id)arg0 queue:(id)arg1 ;
-(void)loadHomeSynchronous;
-(void)loadHomes:(id)arg0 ;


@end


#endif
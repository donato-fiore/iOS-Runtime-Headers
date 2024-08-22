// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LSDATABASEBUILDER_H
#define LSDATABASEBUILDER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface LSDatabaseBuilder : NSObject {
    NSObject<OS_dispatch_queue> *_ioQueue;
}




-(id)initWithIOQueue:(id)arg0 ;
-(void)createAndSeedLocalDatabase:(*BOOL)arg0 ;
-(void)seedCryptexContentIfNeeded:(*BOOL)arg0 ;
-(void)setSeedingComplete:(BOOL)arg0 ;
-(void)syncWithMI:(*void)arg0 ;


@end


#endif
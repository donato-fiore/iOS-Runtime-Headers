// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PETRESERVOIRSAMPLINGLOGSTOREINMEMORY_H
#define PETRESERVOIRSAMPLINGLOGSTOREINMEMORY_H

@class NSMutableData, NSString;
@protocol PETReservoirSamplingLogStore;

#import <Foundation/Foundation.h>


@interface PETReservoirSamplingLogStoreInMemory : NSObject <PETReservoirSamplingLogStore>

 {
    NSMutableData *_data;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(?)appendDataandReturnMapPointer;
-(BOOL)attemptToRecreate;
-(BOOL)changeLength:(NSUInteger)arg0 ;
-(BOOL)lock;
-(NSUInteger)currentLength;
-(id)init;
-(struct ? *)headerMap:(*NSUInteger)arg0 ;
-(struct ? *)remap:(*NSUInteger)arg0 ;
-(void)unlock;


@end


#endif
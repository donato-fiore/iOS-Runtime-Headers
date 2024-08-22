// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PETRESERVOIRSAMPLINGLOGSTOREFILE_H
#define PETRESERVOIRSAMPLINGLOGSTOREFILE_H

@class NSString;
@protocol PETReservoirSamplingLogStore;

#import <Foundation/Foundation.h>


@interface PETReservoirSamplingLogStoreFile : NSObject <PETReservoirSamplingLogStore>

 {
    NSString *_path;
    *void _ptr;
    NSUInteger _mapLen;
    int _fd;
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
-(id)initWithPath:(id)arg0 ;
-(struct ? *)headerMap:(*NSUInteger)arg0 ;
-(struct ? *)remap:(*NSUInteger)arg0 ;
-(void)_unmap;
-(void)dealloc;
-(void)unlock;


@end


#endif
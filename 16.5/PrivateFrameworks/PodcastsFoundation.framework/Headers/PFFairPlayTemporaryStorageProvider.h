// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFFAIRPLAYTEMPORARYSTORAGEPROVIDER_H
#define PFFAIRPLAYTEMPORARYSTORAGEPROVIDER_H

@protocol PFFairPlayTemporaryKeyStorageProviding;

#import <Foundation/Foundation.h>


@interface PFFairPlayTemporaryStorageProvider : NSObject <PFFairPlayTemporaryKeyStorageProviding>

 {
    ? fileManager;
    ? $__lazy_storage_$_logPrefix;
}




-(BOOL)directoryExistsFor:(NSInteger)arg0 ;
-(BOOL)removeDirectoryFor:(NSInteger)arg0 error:(*id)arg1 ;
-(id)createDirectoryFor:(NSInteger)arg0 error:(*id)arg1 ;
-(id)directoryLocationFor:(NSInteger)arg0 ;
-(id)init;


@end


#endif
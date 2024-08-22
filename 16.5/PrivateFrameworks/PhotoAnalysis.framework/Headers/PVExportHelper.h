// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PVEXPORTHELPER_H
#define PVEXPORTHELPER_H


#import <Foundation/Foundation.h>


@interface PVExportHelper : NSObject



+(BOOL)exportPhotoLibrary:(id)arg0 toURL:(id)arg1 forPeopleType:(NSUInteger)arg2 error:(*id)arg3 ;
+(BOOL)snapshotPhotoLibrary:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
+(id)_peopleClustersDictionaryForType:(NSUInteger)arg0 withPhotoLibrary:(id)arg1 ;


@end


#endif
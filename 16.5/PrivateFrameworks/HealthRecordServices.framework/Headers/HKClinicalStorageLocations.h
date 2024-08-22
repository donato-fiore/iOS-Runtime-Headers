// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCLINICALSTORAGELOCATIONS_H
#define HKCLINICALSTORAGELOCATIONS_H


#import <Foundation/Foundation.h>


@interface HKClinicalStorageLocations : NSObject



+(BOOL)removeLocalFileAtURL:(id)arg0 error:(*id)arg1 ;
+(BOOL)storeData:(id)arg0 inLocalFileAtURL:(id)arg1 error:(*id)arg2 ;
+(id)downloadableAttachmentsDirectory;
+(id)homeMobileDirectory;
+(id)mobileLibraryHealthDirectory;


@end


#endif
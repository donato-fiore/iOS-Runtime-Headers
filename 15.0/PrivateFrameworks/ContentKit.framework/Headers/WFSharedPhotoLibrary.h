// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSHAREDPHOTOLIBRARY_H
#define WFSHAREDPHOTOLIBRARY_H

@class NSString, PHPhotoLibrary;
@protocol PHPhotoLibraryAvailabilityObserver;

#import <Foundation/Foundation.h>


@interface WFSharedPhotoLibrary : NSObject <PHPhotoLibraryAvailabilityObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) PHPhotoLibrary *systemPhotoLibrary; // ivar: _systemPhotoLibrary


+(id)sharedLibrary;
-(id)fetchOptionsWithError:(*id)arg0 ;
-(id)systemPhotoLibraryWithError:(*id)arg0 ;
-(void)photoLibraryDidBecomeUnavailable:(id)arg0 ;


@end


#endif
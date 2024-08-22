// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKLIBRARYSELECTEDFACESNAPSHOTPROVIDER_H
#define NTKLIBRARYSELECTEDFACESNAPSHOTPROVIDER_H

@class NSString, UIImage;
@protocol NTKFaceCollectionObserver, NTKFaceObserver, OS_dispatch_queue, NTKLibrarySelectedFaceSnapshotProviderDelegate;

#import <Foundation/Foundation.h>

#import "NTKFaceCollection.h"
#import "NTKFace.h"

@interface NTKLibrarySelectedFaceSnapshotProvider : NSObject <NTKFaceCollectionObserver, NTKFaceObserver>

 {
    NTKFaceCollection *_libraryCollection;
    NTKFace *_selectedFace;
    NSString *_snapshotKey;
    NSObject<OS_dispatch_queue> *_snapshotRequestsQueue;
    BOOL _resumedQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NTKLibrarySelectedFaceSnapshotProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImage *snapshotImage;
@property (readonly) Class superclass;


+(void)snapshotCurrentFaceForActiveDeviceWithOptions:(id)arg0 completion:(id)arg1 ;
+(void)snapshotCurrentFaceForDevice:(id)arg0 withOptions:(id)arg1 completion:(id)arg2 ;
+(void)snapshotCurrentFaceForDeviceUUID:(id)arg0 withOptions:(id)arg1 completion:(id)arg2 ;
-(id)initWithDeviceUUID:(id)arg0 ;
-(id)initWithDeviceUUID:(id)arg0 delegate:(id)arg1 ;
-(void)_handleFaceChange:(id)arg0 ;
-(void)_handleSnapshotChangedNotification:(id)arg0 ;
-(void)_notifyIfSnapshotAvailable;
-(void)_updateSelectedFaceAndSnapshotKey;
-(void)dealloc;
-(void)faceCollection:(id)arg0 didSelectFace:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)faceCollectionDidLoad:(id)arg0 ;
-(void)faceConfigurationDidChange:(id)arg0 ;
-(void)faceResourceDirectoryDidChange:(id)arg0 ;
-(void)snapshotSelectedFaceWithOptions:(id)arg0 completion:(id)arg1 ;


@end


#endif
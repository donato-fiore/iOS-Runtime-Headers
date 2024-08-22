// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIAGGREGATEMEDIALIBRARY_H
#define VUIAGGREGATEMEDIALIBRARY_H



#import "VUIDeviceMediaLibrary.h"
#import "VUISidebandMediaLibrary.h"

@interface VUIAggregateMediaLibrary : VUIDeviceMediaLibrary

@property (readonly, nonatomic) VUIDeviceMediaLibrary *deviceMediaLibrary; // ivar: _deviceMediaLibrary
@property (readonly, nonatomic) VUISidebandMediaLibrary *sidebandMediaLibrary; // ivar: _sidebandMediaLibrary


+(id)keyPathsForValuesAffectingConnectionState;
-(BOOL)isInitialUpdateInProgress;
-(BOOL)isUpdating;
-(NSUInteger)connectionState;
-(id)_imageLoadOperationWithParams:(id)arg0 scaleToSize:(struct CGSize )arg1 cropToFit:(BOOL)arg2 ;
-(id)_imageLoadParamsForImageLoaderObject:(id)arg0 ;
-(id)_imageLoaderIdentifier;
-(id)enqueueFetchRequests:(id)arg0 completionHandler:(id)arg1 ;
-(id)enqueueMediaItemEntityTypesFetchWithCompletionHandler:(id)arg0 ;
-(id)initWithManager:(id)arg0 deviceMediaLibrary:(id)arg1 sidebandMediaLibrary:(id)arg2 ;
-(id)saveMediaEntity:(id)arg0 completionHandler:(id)arg1 ;
-(id)title;
-(void)_deviceMediaLibraryContentsDidChange:(id)arg0 ;
-(void)_sidebandMediaLibraryContentsDidChangeNotification:(id)arg0 ;
// -(void)connectWithCompletionHandler:(id)arg0 progressHandler:(unk)arg1  ;
-(void)dealloc;
-(void)updateFromCloudWithReason:(NSInteger)arg0 ;
-(void)updateProgressWithCompletionHandler:(id)arg0 ;


@end


#endif
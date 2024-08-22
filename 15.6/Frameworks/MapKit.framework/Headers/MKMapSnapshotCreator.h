// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKMAPSNAPSHOTCREATOR_H
#define MKMAPSNAPSHOTCREATOR_H

@class UIImage, NSString, NSLock, NSMutableArray;
@protocol MKMapViewDelegate;

#import <Foundation/Foundation.h>

#import "MKMapSnapshotRequest.h"

@interface MKMapSnapshotCreator : NSObject <MKMapViewDelegate>

 {
    UIImage *_lastSnapshot;
    NSString *_lastAttributionString;
    NSLock *_requestLock;
    NSMutableArray *_requests;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MKMapSnapshotRequest *servingRequest; // ivar: _servingRequest
@property (readonly) Class superclass;


+(BOOL)supportsSharingThumbnails;
-(id)_newSnapshotWithView:(id)arg0 ;
-(id)init;
-(id)recreateCurrentSnapshotWithRequester:(id)arg0 context:(id)arg1 ;
-(void)_processRequest;
-(void)_respondWithSnapshot;
-(void)createSnapShotWithCoordinate:(struct CLLocationCoordinate2D )arg0 zoomLevel:(NSUInteger)arg1 size:(struct CGSize )arg2 handler:(id)arg3 ;
-(void)createSnapShotWithCoordinate:(struct CLLocationCoordinate2D )arg0 zoomLevel:(NSUInteger)arg1 size:(struct CGSize )arg2 requester:(id)arg3 context:(id)arg4 ;
-(void)dealloc;
-(void)flushRequestQueue;


@end


#endif
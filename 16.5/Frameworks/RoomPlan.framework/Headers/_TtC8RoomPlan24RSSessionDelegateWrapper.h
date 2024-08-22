// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8ROOMPLAN24RSSESSIONDELEGATEWRAPPER_H
#define _TTC8ROOMPLAN24RSSESSIONDELEGATEWRAPPER_H

@protocol RSCaptureSessionDelegate;

#import <Foundation/Foundation.h>


@interface _TtC8RoomPlan24RSSessionDelegateWrapper : NSObject <RSCaptureSessionDelegate>

 {
    ? captureSession;
    ? initializationState;
}




-(id)init;
-(void)session:(id)arg0 didFailWithError:(NSInteger)arg1 ;
-(void)session:(id)arg0 didUpdateAsset:(id)arg1 ;
-(void)session:(id)arg0 didUpdateFloorPlan:(id)arg1 ;
-(void)session:(id)arg0 didUpdateMarkerCoaching:(id)arg1 ;
-(void)session:(id)arg0 didUpdateTextCoaching:(id)arg1 ;


@end


#endif
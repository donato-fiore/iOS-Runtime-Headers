// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKPLACERESERVATIONVIEWCONTROLLER_H
#define MKPLACERESERVATIONVIEWCONTROLLER_H

@class NSString;
@protocol MKModuleViewControllerProtocol;


#import "MKPlaceSectionViewController.h"
#import "MKPlaceReservationRowView.h"
#import "_MKPlaceReservationInfo.h"

@interface MKPlaceReservationViewController : MKPlaceSectionViewController <MKModuleViewControllerProtocol>

 {
    MKPlaceReservationRowView *_reservationCell;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _MKPlaceReservationInfo *reservationInfo; // ivar: _reservationInfo
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(void)_updateReservationInfoAnimated:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif
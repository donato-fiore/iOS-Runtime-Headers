// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC19APPSTOREKITINTERNAL14ERRORPRESENTER_H
#define _TTC19APPSTOREKITINTERNAL14ERRORPRESENTER_H

@protocol ASKAirplaneModeInquiryDelegate;

#import <Foundation/Foundation.h>


@interface _TtC19AppStoreKitInternal14ErrorPresenter : NSObject <ASKAirplaneModeInquiryDelegate>

 {
    ? networkInquiry;
    ? airplaneModeInquiry;
    ? cellularDataInquiry;
    ? networkObservation;
    ? view;
    ? reasonForNoInternet;
    ? error;
}




-(id)init;
-(void)airplaneModeInquiryDidObserveChange:(id)arg0 ;
-(void)dealloc;


@end


#endif
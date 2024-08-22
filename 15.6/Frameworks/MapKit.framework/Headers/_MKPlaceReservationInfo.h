// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKPLACERESERVATIONINFO_H
#define _MKPLACERESERVATIONINFO_H

@class NSString, UIImage, NSArray;
@protocol _MKPlaceReservationDelegate;

#import <Foundation/Foundation.h>


@interface _MKPlaceReservationInfo : NSObject

@property (readonly, copy, nonatomic) NSString *attributionProviderDisplayName; // ivar: _attributionProviderDisplayName
@property (readonly, nonatomic) UIImage *attributionProviderLogoImage; // ivar: _attributionProviderLogoImage
@property (readonly, copy, nonatomic) NSArray *openTimes; // ivar: _openTimes
@property (readonly, weak, nonatomic) NSObject<_MKPlaceReservationDelegate> *reservationDelegate; // ivar: _reservationDelegate


-(id)initWithOpenTimes:(id)arg0 attributionProviderName:(id)arg1 providerLogoImage:(id)arg2 delegate:(id)arg3 ;


@end


#endif
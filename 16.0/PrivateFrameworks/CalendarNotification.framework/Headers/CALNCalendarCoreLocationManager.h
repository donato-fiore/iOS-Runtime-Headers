// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALNCALENDARCORELOCATIONMANAGER_H
#define CALNCALENDARCORELOCATIONMANAGER_H

@protocol CALNCoreLocationProvider;

#import <Foundation/Foundation.h>


@interface CALNCalendarCoreLocationManager : NSObject

@property (readonly, nonatomic) BOOL allowsLocationAlerts;
@property (readonly, nonatomic) NSObject<CALNCoreLocationProvider> *coreLocationProvider; // ivar: _coreLocationProvider


-(id)initWithCoreLocationProvider:(id)arg0 ;
-(void)markAsHavingReceivedLocation;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVRUICOREDEVICEQUERY_H
#define TVRUICOREDEVICEQUERY_H

@class NSString, NSMutableDictionary, TVRCDeviceQuery;
@protocol TVRCDeviceQueryDelegate, TVRUIDeviceQuery, TVRUIDeviceSearchDelegate;

#import <Foundation/Foundation.h>


@interface TVRUICoreDeviceQuery : NSObject <TVRCDeviceQueryDelegate, TVRUIDeviceQuery>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TVRUIDeviceSearchDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *deviceList; // ivar: _deviceList
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TVRCDeviceQuery *query; // ivar: _query
@property (readonly) Class superclass;


-(BOOL)hasStarted;
-(void)deviceQueryDidUpdateDevices:(id)arg0 ;
-(void)startQuery:(id)arg0 ;
-(void)stop;


@end


#endif
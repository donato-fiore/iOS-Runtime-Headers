// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CASESSIONDATA_H
#define CASESSIONDATA_H

@class NSDictionary, NSNumber, NSUUID;

#import <Foundation/Foundation.h>


@interface CASessionData : NSObject

@property (retain, nonatomic) NSDictionary *configureCompleteEvent; // ivar: _configureCompleteEvent
@property (retain, nonatomic) NSDictionary *configureEvent; // ivar: _configureEvent
@property (retain, nonatomic) NSDictionary *deinitEvent; // ivar: _deinitEvent
@property (retain, nonatomic) NSNumber *isOwner; // ivar: _isOwner
@property (retain, nonatomic) NSNumber *numberOfErrorEvents; // ivar: _numberOfErrorEvents
@property (retain, nonatomic) NSUUID *productUUID; // ivar: _productUUID


-(id)init;
-(void)configure:(id)arg0 ;
-(void)configureComplete:(id)arg0 ;
-(void)deinit:(id)arg0 ;
-(void)error:(id)arg0 ;
-(void)logData;


@end


#endif
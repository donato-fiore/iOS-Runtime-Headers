// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CABTSESSIONDATA_H
#define CABTSESSIONDATA_H

@class NSDictionary, NSNumber, NSUUID;

#import <Foundation/Foundation.h>


@interface CABTSessionData : NSObject

@property (retain, nonatomic) NSDictionary *configureCompleteEvent; // ivar: _configureCompleteEvent
@property (retain, nonatomic) NSDictionary *configureEvent; // ivar: _configureEvent
@property (retain, nonatomic) NSDictionary *deinitEvent; // ivar: _deinitEvent
@property (nonatomic) BOOL isOwner; // ivar: _isOwner
@property (retain, nonatomic) NSNumber *numberOfErrorEvents; // ivar: _numberOfErrorEvents
@property (retain, nonatomic) NSUUID *productUUID; // ivar: _productUUID
@property (nonatomic) int txPower; // ivar: _txPower


-(id)init;
-(void)configure:(id)arg0 withOwner:(BOOL)arg1 ;
-(void)configureComplete:(id)arg0 withTxPower:(int)arg1 ;
-(void)deinit:(id)arg0 ;
-(void)error:(id)arg0 ;
-(void)logData;


@end


#endif
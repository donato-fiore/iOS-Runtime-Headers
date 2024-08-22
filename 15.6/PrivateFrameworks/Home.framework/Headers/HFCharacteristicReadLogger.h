// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFCHARACTERISTICREADLOGGER_H
#define HFCHARACTERISTICREADLOGGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface HFCharacteristicReadLogger : NSObject

@property (retain, nonatomic) NSMutableDictionary *accessoriesToReadByTransport; // ivar: _accessoriesToReadByTransport


+(id)nameForTransportType:(NSUInteger)arg0 ;
+(id)transportKeyForCharacteristic:(id)arg0 ;
-(NSUInteger)numberOfAccessoriesForTransportType:(NSUInteger)arg0 ;
-(id)init;
-(void)addCharacteristic:(id)arg0 withUpdateLogger:(id)arg1 ;
-(void)markCharacteristicAsRead:(id)arg0 withLogger:(id)arg1 ;


@end


#endif
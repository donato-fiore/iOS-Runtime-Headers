// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASSYNCHEALTHPRIVATEDEVICEDATA_H
#define ICASSYNCHEALTHPRIVATEDEVICEDATA_H

@class NSString;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASSyncHealthPrivateDeviceData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSString *syncHealthPrivateDeviceID; // ivar: _syncHealthPrivateDeviceID


+(id)dataName;
-(id)initWithSyncHealthPrivateDeviceID:(id)arg0 ;
-(id)toDict;


@end


#endif
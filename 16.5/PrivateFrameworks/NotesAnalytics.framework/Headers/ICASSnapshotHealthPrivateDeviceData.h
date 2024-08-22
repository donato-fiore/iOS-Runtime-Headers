// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASSNAPSHOTHEALTHPRIVATEDEVICEDATA_H
#define ICASSNAPSHOTHEALTHPRIVATEDEVICEDATA_H

@class NSString;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASSnapshotHealthPrivateDeviceData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSString *snapshotHealthPrivateDeviceID; // ivar: _snapshotHealthPrivateDeviceID


+(id)dataName;
-(id)initWithSnapshotHealthPrivateDeviceID:(id)arg0 ;
-(id)toDict;


@end


#endif
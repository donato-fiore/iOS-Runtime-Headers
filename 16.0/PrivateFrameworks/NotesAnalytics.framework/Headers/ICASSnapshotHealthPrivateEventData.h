// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASSNAPSHOTHEALTHPRIVATEEVENTDATA_H
#define ICASSNAPSHOTHEALTHPRIVATEEVENTDATA_H

@class NSString;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASSnapshotHealthPrivateEventData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSString *snapshotHealthPrivateSessionID; // ivar: _snapshotHealthPrivateSessionID


+(id)dataName;
-(id)initWithSnapshotHealthPrivateSessionID:(id)arg0 ;
-(id)toDict;


@end


#endif
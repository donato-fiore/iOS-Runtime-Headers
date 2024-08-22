// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASSYNCHEALTHPRIVATEEVENTDATA_H
#define ICASSYNCHEALTHPRIVATEEVENTDATA_H

@class NSString;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASSyncHealthPrivateEventData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSString *syncHealthPrivateSessionID; // ivar: _syncHealthPrivateSessionID


+(id)dataName;
-(id)initWithSyncHealthPrivateSessionID:(id)arg0 ;
-(id)toDict;


@end


#endif
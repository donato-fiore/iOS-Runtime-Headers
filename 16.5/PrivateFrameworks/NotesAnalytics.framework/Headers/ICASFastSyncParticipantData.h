// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASFASTSYNCPARTICIPANTDATA_H
#define ICASFASTSYNCPARTICIPANTDATA_H

@class NSNumber;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASFastSyncParticipantData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *countOfUniqueAccounts; // ivar: _countOfUniqueAccounts
@property (readonly, nonatomic) NSNumber *countOfUniqueDevices; // ivar: _countOfUniqueDevices


+(id)dataName;
-(id)initWithCountOfUniqueAccounts:(id)arg0 countOfUniqueDevices:(id)arg1 ;
-(id)toDict;


@end


#endif
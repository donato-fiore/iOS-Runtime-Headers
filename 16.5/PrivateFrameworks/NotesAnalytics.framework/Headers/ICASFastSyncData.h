// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASFASTSYNCDATA_H
#define ICASFASTSYNCDATA_H

@class NSString, NSArray;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASFastSyncData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSString *fastSyncSessionId; // ivar: _fastSyncSessionId
@property (readonly, nonatomic) NSArray *participantVersions; // ivar: _participantVersions


+(id)dataName;
-(id)initWithFastSyncSessionId:(id)arg0 participantVersions:(id)arg1 ;
-(id)toDict;


@end


#endif
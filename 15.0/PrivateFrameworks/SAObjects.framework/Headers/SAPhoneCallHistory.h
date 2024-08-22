// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAPHONECALLHISTORY_H
#define SAPHONECALLHISTORY_H

@class NSNumber;


#import "SAPhoneCallSearchResult.h"

@interface SAPhoneCallHistory : SAPhoneCallSearchResult

@property (copy, nonatomic) NSNumber *blocked;
@property (copy, nonatomic) NSNumber *callCount;
@property (copy, nonatomic) NSNumber *faceTime;
@property (copy, nonatomic) NSNumber *faceTimeAudio;
@property (copy, nonatomic) NSNumber *missed;
@property (copy, nonatomic) NSNumber *outgoing;


+(id)callHistory;
+(id)callHistoryWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAMPADDMEDIAENTITYTOACOUSTICIDHISTORY_H
#define SAMPADDMEDIAENTITYTOACOUSTICIDHISTORY_H

@class NSString;


#import "SABaseClientBoundCommand.h"

@interface SAMPAddMediaEntityToAcousticIdHistory : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *adamId;
@property (copy, nonatomic) NSString *affiliateId;


+(id)addMediaEntityToAcousticIdHistory;
+(id)addMediaEntityToAcousticIdHistoryWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif
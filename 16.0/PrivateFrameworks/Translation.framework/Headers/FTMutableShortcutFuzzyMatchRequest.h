// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTMUTABLESHORTCUTFUZZYMATCHREQUEST_H
#define FTMUTABLESHORTCUTFUZZYMATCHREQUEST_H

@class NSString, NSArray;


#import "FTShortcutFuzzyMatchRequest.h"
#import "FTShortcutFuzzyMatchRequest_StringTokenPair.h"

@interface FTMutableShortcutFuzzyMatchRequest : FTShortcutFuzzyMatchRequest

@property (copy, nonatomic) NSString *context;
@property (copy, nonatomic) NSString *device_type;
@property (copy, nonatomic) NSString *interaction_id;
@property (copy, nonatomic) NSString *locale;
@property (copy, nonatomic) NSString *request_id;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSArray *shortcuts;
@property (copy, nonatomic) FTShortcutFuzzyMatchRequest_StringTokenPair *utterance;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif
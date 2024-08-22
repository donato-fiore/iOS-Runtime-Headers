// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAPHONESEARCH_H
#define SAPHONESEARCH_H

@class NSArray, NSDate, NSNumber;


#import "SADomainCommand.h"

@interface SAPhoneSearch : SADomainCommand

@property (copy, nonatomic) NSArray *contacts;
@property (copy, nonatomic) NSDate *end;
@property (copy, nonatomic) NSNumber *faceTime;
@property (copy, nonatomic) NSNumber *faceTimeAudio;
@property (copy, nonatomic) NSNumber *isNew;
@property (copy, nonatomic) NSNumber *last;
@property (copy, nonatomic) NSNumber *missed;
@property (copy, nonatomic) NSNumber *outgoing;
@property (copy, nonatomic) NSDate *start;
@property (copy, nonatomic) NSNumber *voiceMail;


+(id)search;
+(id)searchWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif
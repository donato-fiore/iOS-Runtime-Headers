// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAWEBNEWSRESULT_H
#define SAWEBNEWSRESULT_H

@class NSDate, NSString;


#import "SAWebWebResult.h"

@interface SAWebNewsResult : SAWebWebResult

@property (copy, nonatomic) NSDate *publicationDate;
@property (copy, nonatomic) NSString *source;


+(id)newsResult;
+(id)newsResultWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAPHONECALLSEARCHRESULT_H
#define SAPHONECALLSEARCHRESULT_H

@class NSDate, NSNumber;


#import "SADomainObject.h"
#import "SAPersonAttribute.h"

@interface SAPhoneCallSearchResult : SADomainObject

@property (copy, nonatomic) NSDate *callTime;
@property (retain, nonatomic) SAPersonAttribute *contact;
@property (copy, nonatomic) NSNumber *isNew;


+(id)callSearchResult;
+(id)callSearchResultWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif
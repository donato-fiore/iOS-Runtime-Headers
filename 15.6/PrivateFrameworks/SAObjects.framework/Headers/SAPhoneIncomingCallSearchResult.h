// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAPHONEINCOMINGCALLSEARCHRESULT_H
#define SAPHONEINCOMINGCALLSEARCHRESULT_H

@class NSString;


#import "SADomainObject.h"
#import "SAPersonAttribute.h"

@interface SAPhoneIncomingCallSearchResult : SADomainObject

@property (retain, nonatomic) SAPersonAttribute *caller;
@property (copy, nonatomic) NSString *incomingCallType;


+(id)incomingCallSearchResult;
+(id)incomingCallSearchResultWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif
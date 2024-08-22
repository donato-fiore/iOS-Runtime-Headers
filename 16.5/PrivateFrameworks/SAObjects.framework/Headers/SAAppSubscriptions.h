// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAAPPSUBSCRIPTIONS_H
#define SAAPPSUBSCRIPTIONS_H

@class NSArray, NSString;
@protocol SABackgroundContextObject;


#import "SADomainObject.h"

@interface SAAppSubscriptions : SADomainObject <SABackgroundContextObject>



@property (copy, nonatomic) NSArray *activeSubscriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)appSubscriptions;
+(id)appSubscriptionsWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif
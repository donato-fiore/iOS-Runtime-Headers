// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAUSSECTION_H
#define SAUSSECTION_H

@class NSArray, NSString;


#import "SADomainObject.h"
#import "SAUIAppPunchOut.h"

@interface SAUSSection : SADomainObject

@property (copy, nonatomic) NSArray *cardResults;
@property (copy, nonatomic) NSArray *genericResults;
@property (retain, nonatomic) SAUIAppPunchOut *punchOut;
@property (copy, nonatomic) NSString *sectionTitle;


+(id)section;
+(id)sectionWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif
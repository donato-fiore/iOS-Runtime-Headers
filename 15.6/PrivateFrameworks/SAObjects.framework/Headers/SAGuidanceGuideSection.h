// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAGUIDANCEGUIDESECTION_H
#define SAGUIDANCEGUIDESECTION_H

@class NSArray, NSString;


#import "SADomainObject.h"

@interface SAGuidanceGuideSection : SADomainObject

@property (copy, nonatomic) NSArray *guideUtterances;
@property (copy, nonatomic) NSString *sectionName;


+(id)guideSection;
+(id)guideSectionWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif
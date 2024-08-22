// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXSSDOCUMENTTEXTRULEBULLETS_H
#define AXSSDOCUMENTTEXTRULEBULLETS_H



#import "AXSSDocumentTextRule.h"

@interface AXSSDocumentTextRuleBullets : AXSSDocumentTextRule



-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)issuesForWord:(id)arg0 atRange:(struct _NSRange )arg1 previousWord:(id)arg2 previousWordRange:(struct _NSRange )arg3 inText:(id)arg4 ignoreRuleUntilIndex:(*NSInteger)arg5 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXSSDOCUMENTTEXTRULE_H
#define AXSSDOCUMENTTEXTRULE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface AXSSDocumentTextRule : NSObject <NSCopying>



@property (nonatomic) NSInteger granularity; // ivar: _granularity
@property (nonatomic) NSInteger severity; // ivar: _severity


+(id)matchReplacementArrayCapitalization:(id)arg0 withSource:(id)arg1 ;
+(id)matchReplacementCapitalization:(id)arg0 withSource:(id)arg1 ;
+(id)replaceCustomRegexNotation:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)issuesForWord:(id)arg0 atRange:(struct _NSRange )arg1 previousWord:(id)arg2 previousWordRange:(struct _NSRange )arg3 inText:(id)arg4 ignoreRuleUntilIndex:(*NSInteger)arg5 ;
-(id)issuesInText:(id)arg0 ;


@end


#endif
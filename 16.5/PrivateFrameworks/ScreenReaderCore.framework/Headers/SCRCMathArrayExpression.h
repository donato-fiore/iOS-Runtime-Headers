// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCRCMATHARRAYEXPRESSION_H
#define SCRCMATHARRAYEXPRESSION_H

@class NSArray, NSString;


#import "SCRCMathExpression.h"

@interface SCRCMathArrayExpression : SCRCMathExpression {
    NSArray *_children;
}


@property (readonly, nonatomic) NSArray *mathMLAttributes;
@property (readonly, nonatomic) NSString *mathMLTag;


-(BOOL)hasSimpleArrayOfChildren;
-(id)childSpeakableSegmentsWithSpeakingStyle:(NSInteger)arg0 upToDepth:(NSUInteger)arg1 parentTreePosition:(id)arg2 childIndex:(*NSUInteger)arg3 ;
-(id)children;
-(id)description;
-(id)initWithDictionary:(id)arg0 ;
-(id)localizablePrefixForChildAtIndex:(NSUInteger)arg0 ;
-(id)localizableSuffixForChildAtIndex:(NSUInteger)arg0 ;
-(id)mathMLString;
-(id)prefixForChildAtIndex:(NSUInteger)arg0 ;
-(id)speakableDescriptionWithSpeakingStyle:(NSInteger)arg0 arePausesAllowed:(BOOL)arg1 ;
-(id)speakableSegmentsWithSpeakingStyle:(NSInteger)arg0 upToDepth:(NSUInteger)arg1 treePosition:(id)arg2 ;
-(id)subExpressions;
-(id)suffixForChildAtIndex:(NSUInteger)arg0 ;


@end


#endif
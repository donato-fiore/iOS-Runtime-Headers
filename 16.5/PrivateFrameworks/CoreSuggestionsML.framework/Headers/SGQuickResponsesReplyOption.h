// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGQUICKRESPONSESREPLYOPTION_H
#define SGQUICKRESPONSESREPLYOPTION_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface SGQuickResponsesReplyOption : NSObject

@property (readonly, nonatomic) NSNumber *position; // ivar: _position
@property (readonly, nonatomic) NSNumber *ucb; // ivar: _ucb


+(CGFloat)totalDisplayedCountForRecords:(id)arg0 ;
+(CGFloat)ucbCombinedForSelected:(CGFloat)arg0 displayed:(CGFloat)arg1 actualOptionsDisplayed:(CGFloat)arg2 matched:(CGFloat)arg3 imputedDisplayed:(CGFloat)arg4 imputedOptionsDisplayed:(CGFloat)arg5 explorationFactor:(CGFloat)arg6 ;
+(CGFloat)ucbCombinedWithMeanA:(CGFloat)arg0 meanB:(CGFloat)arg1 varianceA:(CGFloat)arg2 varianceB:(CGFloat)arg3 explorationFactor:(CGFloat)arg4 ;
+(CGFloat)ucbTunedVarianceForMean:(CGFloat)arg0 displayed:(CGFloat)arg1 totalDisplayed:(CGFloat)arg2 ;
+(CGFloat)ucbWithMean:(CGFloat)arg0 varianceOfMean:(CGFloat)arg1 explorationFactor:(CGFloat)arg2 ;
+(id)imputedDisplayedForRecords:(id)arg0 config:(id)arg1 ;
+(id)sortedReplyOptionsForRecords:(id)arg0 config:(id)arg1 ;
-(NSInteger)compare:(id)arg0 ;
-(id)initWithPosition:(NSUInteger)arg0 records:(id)arg1 actualOptionsDisplayedCount:(CGFloat)arg2 imputedOptionsDisplayedCount:(CGFloat)arg3 imputedOptionsDisplayed:(id)arg4 config:(id)arg5 ;


@end


#endif
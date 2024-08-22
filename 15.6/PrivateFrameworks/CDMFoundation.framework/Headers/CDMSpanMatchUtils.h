// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDMSPANMATCHUTILS_H
#define CDMSPANMATCHUTILS_H


#import <Foundation/Foundation.h>


@interface CDMSpanMatchUtils : NSObject



+(BOOL)isSamePosition:(id)arg0 spanB:(id)arg1 asrMapA:(id)arg2 asrMapB:(id)arg3 cdmTokenChainA:(id)arg4 cdmTokenChainB:(id)arg5 ;
+(BOOL)matcherNameIsSupportedForAsrAlternative:(id)arg0 ;
+(CGFloat)calculateAsrConfidenceForCharIndexBegin:(NSInteger)arg0 charIndexEnd:(NSInteger)arg1 asrTimingMap:(id)arg2 asrHypothesis:(id)arg3 ;
+(id)createAsrAlternativeIdentifier:(id)arg0 nameSpace:(id)arg1 nodeIndex:(unsigned int)arg2 backingAppBundleId:(id)arg3 sourceComponent:(int)arg4 asrConfidence:(CGFloat)arg5 ;
+(void)addAsrConfidenceToSpans:(id)arg0 tokenChain:(id)arg1 asrTimingMap:(id)arg2 asrHypothesis:(id)arg3 ;
+(void)mergeAsrAlternativeIntoSpan:(id)arg0 asrAltSpan:(id)arg1 asrAltCdmTokenChain:(id)arg2 asrAltHypothesis:(id)arg3 asrAltTimingMap:(id)arg4 ;


@end


#endif
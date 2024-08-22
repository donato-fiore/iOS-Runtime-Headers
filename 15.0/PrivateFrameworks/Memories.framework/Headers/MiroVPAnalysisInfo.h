// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MIROVPANALYSISINFO_H
#define MIROVPANALYSISINFO_H

@class NSDate, NSArray<MiroVPMetadataRangeMergeable>;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MiroVPAnalysisInfo : NSObject <NSCopying>



@property (readonly, nonatomic) NSInteger analysisVersion; // ivar: _analysisVersion
@property (retain, nonatomic) id *context; // ivar: context
@property (readonly, nonatomic) NSUInteger flags; // ivar: _flags
@property (readonly, nonatomic) CGFloat junkScore; // ivar: _junkScore
@property (readonly, nonatomic) NSDate *performedAnalysisDate; // ivar: _performedAnalysisDate
@property (readonly, nonatomic) NSUInteger performedAnalysisTypes; // ivar: _performedAnalysisTypes
@property (readonly, nonatomic) CGFloat qualityScore; // ivar: _qualityScore
@property (readonly, nonatomic) NSArray<MiroVPMetadataRangeMergeable> *ranges; // ivar: _ranges


+(id)analysisInfoWithFlags:(NSUInteger)arg0 analysisVersion:(NSInteger)arg1 performedAnalysisTypes:(NSUInteger)arg2 performedAnalysisDate:(id)arg3 qualityScore:(CGFloat)arg4 junkScore:(CGFloat)arg5 ranges:(id)arg6 ;
+(id)descriptionForAnalysisTypes:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif
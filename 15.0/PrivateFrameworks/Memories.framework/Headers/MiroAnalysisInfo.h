// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MIROANALYSISINFO_H
#define MIROANALYSISINFO_H

@class NSDate, NSArray<MiroMetadataRangeMergeable>;

#import <Foundation/Foundation.h>


@interface MiroAnalysisInfo : NSObject

@property (nonatomic) NSInteger analysisVersion; // ivar: _analysisVersion
@property (nonatomic) NSUInteger flags; // ivar: _flags
@property (nonatomic) CGFloat junkScore; // ivar: _junkScore
@property (retain, nonatomic) NSDate *performedAnalysisDate; // ivar: _performedAnalysisDate
@property (nonatomic) NSUInteger performedAnalysisTypes; // ivar: _performedAnalysisTypes
@property (nonatomic) CGFloat qualityScore; // ivar: _qualityScore
@property (retain, nonatomic) NSArray<MiroMetadataRangeMergeable> *ranges; // ivar: _ranges


+(id)analysisInfo;
+(id)analysisInfoWithVPAnalysisInfo:(id)arg0 ;
+(id)descriptionForAnalysisTypes:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(void)mergeWith:(id)arg0 ;


@end


#endif
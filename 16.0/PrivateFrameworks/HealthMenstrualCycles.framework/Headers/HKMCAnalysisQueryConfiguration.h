// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMCANALYSISQUERYCONFIGURATION_H
#define HKMCANALYSISQUERYCONFIGURATION_H

@class HKQueryServerConfiguration;



@interface HKMCAnalysisQueryConfiguration : HKQueryServerConfiguration

@property (nonatomic) BOOL forceAnalysis; // ivar: _forceAnalysis


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
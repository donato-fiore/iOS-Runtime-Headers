// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ABAFIBBURDENANALYZER_H
#define ABAFIBBURDENANALYZER_H


#import <Foundation/Foundation.h>


@interface ABAfibBurdenAnalyzer : NSObject {
    optional<beryllium::output_t> _rawBurdenValue;
}


@property (nonatomic) unsigned char segmentsCount; // ivar: _segmentsCount
@property (nonatomic) unsigned char segmentsWith5TachCount; // ivar: _segmentsWith5TachCount


+(void)removeDiagnosticLogFiles;
-(id)determineBurdenForTachogramClassificationBuckets:(id)arg0 ;
-(id)init;
-(id)processResults:(*void)arg0 withAlgsAnalytics:(struct core_analytics_t *)arg1 ;
-(void)logToFileForTachoList:(id)arg0 withBurdenResults:(id)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAMENSTRUALALGORITHMSHISTORICALANALYZER_H
#define HAMENSTRUALALGORITHMSHISTORICALANALYZER_H

@class NSXPCConnection, NSMutableArray;
@protocol HAMenstrualAlgorithmsPhaseIngestion, HAHistoricalAnalyzerServiceProtocol;

#import <Foundation/Foundation.h>


@interface HAMenstrualAlgorithmsHistoricalAnalyzer : NSObject <HAMenstrualAlgorithmsPhaseIngestion>



@property (retain) NSXPCConnection *connectionToService; // ivar: _connectionToService
@property (retain, nonatomic) NSMutableArray *dayInputBuffer; // ivar: _dayInputBuffer
@property (retain) NSObject<HAHistoricalAnalyzerServiceProtocol> *remoteObjectProxy; // ivar: _remoteObjectProxy


-(id)analyzeWithError:(*id)arg0 ;
-(id)init;
-(void)appendDay:(id)arg0 ;
-(void)beginPhase:(unsigned char)arg0 onJulianDay:(unsigned int)arg1 ;
-(void)dealloc;
-(void)endPhase:(unsigned char)arg0 onJulianDay:(unsigned int)arg1 ;


@end


#endif
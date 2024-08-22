// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAMENSTRUALALGORITHMSDAYSTREAMPROCESSOR_H
#define HAMENSTRUALALGORITHMSDAYSTREAMPROCESSOR_H

@class NSXPCConnection, NSMutableArray;
@protocol HAMenstrualAlgorithmsPhaseIngestion, HADayStreamProcessorServiceProtocol;

#import <Foundation/Foundation.h>


@interface HAMenstrualAlgorithmsDayStreamProcessor : NSObject <HAMenstrualAlgorithmsPhaseIngestion>



@property (retain) NSXPCConnection *connectionToService; // ivar: _connectionToService
@property (retain, nonatomic) NSMutableArray *dayInputBuffer; // ivar: _dayInputBuffer
@property (retain) NSObject<HADayStreamProcessorServiceProtocol> *remoteObjectProxy; // ivar: _remoteObjectProxy


-(id)analyzeWithMostRecentMenstrualFlowJulianDayUpdated:(unsigned int)arg0 error:(*id)arg1 ;
-(id)initWithConfig:(id)arg0 ;
-(void)appendDay:(id)arg0 ;
-(void)beginPhase:(unsigned char)arg0 onJulianDay:(unsigned int)arg1 ;
-(void)dealloc;
-(void)endPhase:(unsigned char)arg0 onJulianDay:(unsigned int)arg1 ;


@end


#endif
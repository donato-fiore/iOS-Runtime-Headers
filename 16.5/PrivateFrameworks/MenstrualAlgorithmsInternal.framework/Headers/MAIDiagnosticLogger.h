// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAIDIAGNOSTICLOGGER_H
#define MAIDIAGNOSTICLOGGER_H

@class NSString;
@protocol HAMenstrualAlgorithmsPhaseIngestion;

#import <Foundation/Foundation.h>


@interface MAIDiagnosticLogger : NSObject <HAMenstrualAlgorithmsPhaseIngestion>



@property (readonly, nonatomic) NSString *baseFileName;
@property (nonatomic) shared_ptr<std::ofstream> inputFile; // ivar: _inputFile
@property (nonatomic) shared_ptr<nlohmann::basic_json<>> inputJson; // ivar: _inputJson
@property ? jsonObjectName;
@property (readonly, nonatomic) NSString *notificationName;
@property (nonatomic) BOOL notifyState;
@property (nonatomic) int notifyToken; // ivar: _notifyToken
@property (nonatomic) shared_ptr<std::ofstream> outputFile; // ivar: _outputFile
@property (nonatomic) shared_ptr<nlohmann::basic_json<>> outputJson; // ivar: _outputJson


-(void)appendDay:(id)arg0 ;
-(void)beginPhase:(unsigned char)arg0 onJulianDay:(unsigned int)arg1 ;
-(void)endPhase:(unsigned char)arg0 onJulianDay:(unsigned int)arg1 ;


@end


#endif
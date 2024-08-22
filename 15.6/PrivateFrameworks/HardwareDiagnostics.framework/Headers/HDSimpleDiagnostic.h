// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSIMPLEDIAGNOSTIC_H
#define HDSIMPLEDIAGNOSTIC_H

@class NSString;
@protocol HDDiagnostic, HDAnalysis, HDExperiment;

#import <Foundation/Foundation.h>


@interface HDSimpleDiagnostic : NSObject <HDDiagnostic>



@property (retain, nonatomic) NSObject<HDAnalysis> *analysis; // ivar: _analysis
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<HDExperiment> *experiment; // ivar: _experiment
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *summary; // ivar: _summary
@property (readonly) Class superclass;


-(id)diagnosticDescription;
-(id)initWithExperiment:(id)arg0 analysis:(id)arg1 ;
-(id)runWithParameters:(id)arg0 host:(id)arg1 error:(*id)arg2 ;


@end


#endif
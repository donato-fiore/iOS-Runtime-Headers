// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSINVESTIGATION_H
#define CLSINVESTIGATION_H

@class NSArray, NSMutableDictionary, NSMutableArray, NSString;
@protocol CLSInvestigationDelegate, CLSInvestigationInterviewDelegate;

#import <Foundation/Foundation.h>

#import "CLSClueCollection.h"
#import "CLSInvestigationFeeder.h"
#import "CLSInvestigationHelper.h"
#import "CLSInspector.h"

@interface CLSInvestigation : NSObject {
    NSArray *_informants;
    NSMutableDictionary *_tracesLogsByURIs;
    NSMutableArray *_tracesLogsURIs;
    ? _investigationFlags;
}


@property (readonly, retain) CLSClueCollection *clueCollection; // ivar: _clueCollection
@property (retain, nonatomic) id *context; // ivar: _context
@property (weak, nonatomic) NSObject<CLSInvestigationDelegate> *delegate; // ivar: _delegate
@property BOOL enableDebuggingClues; // ivar: _enableDebuggingClues
@property (readonly, retain, nonatomic) CLSInvestigationFeeder *feeder; // ivar: _feeder
@property (readonly) CLSInvestigationHelper *helper; // ivar: _helper
@property (readonly, weak, nonatomic) CLSInspector *inspector; // ivar: _inspector
@property (weak, nonatomic) NSObject<CLSInvestigationInterviewDelegate> *interviewDelegate; // ivar: _interviewDelegate
@property (nonatomic) NSUInteger precision; // ivar: _precision
@property (readonly, retain, nonatomic) NSArray *profiles; // ivar: _profiles
@property (readonly, copy, nonatomic) NSString *uuid; // ivar: _uuid


+(id)investigationWithProfiles:(id)arg0 clueDates:(id)arg1 clueLocations:(id)arg2 cluePeoples:(id)arg3 helper:(id)arg4 ;
+(id)investigationWithProfiles:(id)arg0 helper:(id)arg1 ;
-(NSUInteger)numberOfItems;
-(id)_traceStringForType:(NSUInteger)arg0 ;
-(id)description;
-(id)description:(BOOL)arg0 ;
-(id)initWithClueCollection:(id)arg0 profiles:(id)arg1 helper:(id)arg2 ;
-(id)initWithFeeder:(id)arg0 profiles:(id)arg1 helper:(id)arg2 ;
-(id)initWithHelper:(id)arg0 ;
-(id)initWithProfiles:(id)arg0 helper:(id)arg1 ;
-(id)sampleOfItems;
-(id)tracesDescription;
-(void)_didEndInvestigation:(BOOL)arg0 ;
-(void)_willBeginInvestigation:(id)arg0 ;
-(void)addTraceFromObject:(id)arg0 feature:(id)arg1 type:(NSUInteger)arg2 context:(id)arg3 withDescriptionFormat:(id)arg4 ;


@end


#endif
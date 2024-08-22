// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNAUTOCOMPLETEAGGDPERFORMANCEPROBE_H
#define CNAUTOCOMPLETEAGGDPERFORMANCEPROBE_H

@class NSString, NSMutableDictionary;
@protocol CNAutocompletePerformanceProbe;

#import <Foundation/Foundation.h>

#import "CNAutocompleteAggdProbe.h"

@interface CNAutocompleteAggdPerformanceProbe : NSObject <CNAutocompletePerformanceProbe>



@property (retain, nonatomic) CNAutocompleteAggdProbe *aggdProbe; // ivar: _aggdProbe
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *pendingAddData; // ivar: _pendingAddData
@property (readonly) Class superclass;


-(id)init;
-(id)initWithAggdProbe:(id)arg0 ;
-(void)recordLatency:(CGFloat)arg0 forResultCount:(NSUInteger)arg1 forSource:(id)arg2 ;
-(void)recordNumberOfCalendarServerResults:(NSUInteger)arg0 inTimeInterval:(CGFloat)arg1 ;
-(void)recordNumberOfContactResults:(NSUInteger)arg0 inTimeInterval:(CGFloat)arg1 ;
-(void)recordNumberOfDirectoryServerResults:(NSUInteger)arg0 inTimeInterval:(CGFloat)arg1 ;
-(void)recordNumberOfPredictionResults:(NSUInteger)arg0 inTimeInterval:(CGFloat)arg1 ;
-(void)recordNumberOfRecentResults:(NSUInteger)arg0 inTimeInterval:(CGFloat)arg1 ;
-(void)recordNumberOfResultsReturned:(NSUInteger)arg0 inTimeInterval:(CGFloat)arg1 forBatch:(NSUInteger)arg2 includesServers:(BOOL)arg3 ;
-(void)recordNumberOfSuggestionResults:(NSUInteger)arg0 inTimeInterval:(CGFloat)arg1 ;
-(void)recordNumberOfSupplementalResults:(NSUInteger)arg0 inTimeInterval:(CGFloat)arg1 ;
-(void)sendData;


@end


#endif
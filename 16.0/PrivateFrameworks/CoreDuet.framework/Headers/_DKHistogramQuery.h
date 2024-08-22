// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DKHISTOGRAMQUERY_H
#define _DKHISTOGRAMQUERY_H

@class DKQuery, NSDateInterval, NSString, NSPredicate, NSArray;
@protocol _DKExecutableQuery;


#import "_DKEventStream.h"

@interface _DKHistogramQuery : DKQuery <_DKExecutableQuery>

 {
    _DKEventStream *_stream;
    NSDateInterval *_interval;
    NSString *_customIdentifier;
}


@property (copy, nonatomic) id *histogramHandler; // ivar: _histogramHandler
@property (nonatomic) BOOL includeLocalResults; // ivar: _includeLocalResults
@property (nonatomic) BOOL includeRemoteResults; // ivar: _includeRemoteResults
@property (readonly, nonatomic) NSDateInterval *interval;
@property (nonatomic) NSUInteger minimumOccurrencesForInclusion; // ivar: _minimumOccurrencesForInclusion
@property (retain, nonatomic) NSPredicate *predicate; // ivar: _predicate
@property (nonatomic) NSInteger remoteHistogramLimit; // ivar: _remoteHistogramLimit
@property (readonly, nonatomic) _DKEventStream *stream;
@property (retain, nonatomic) NSArray *valueKeyPaths; // ivar: _valueKeyPaths


+(BOOL)supportsSecureCoding;
+(id)histogramQueryForPersistedHistogramsForStream:(id)arg0 withCustomIdentifier:(id)arg1 ;
+(id)histogramQueryForStream:(id)arg0 interval:(id)arg1 ;
+(id)histogramQueryForStream:(id)arg0 interval:(id)arg1 predicate:(id)arg2 valueKeyPaths:(id)arg3 ;
+(id)histogramQueryForStream:(id)arg0 interval:(id)arg1 withPredicate:(id)arg2 ;
-(id)description;
-(id)executeUsingCoreDataStorage:(id)arg0 error:(*id)arg1 ;
-(id)handleResults:(id)arg0 error:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
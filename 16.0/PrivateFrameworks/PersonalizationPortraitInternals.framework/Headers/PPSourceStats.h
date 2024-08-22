// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPSOURCESTATS_H
#define PPSOURCESTATS_H

@class NSDate, NSSet;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface PPSourceStats : NSObject <MLFeatureProvider>



@property (readonly, nonatomic) CGFloat avgRefCount; // ivar: _avgRefCount
@property (readonly, nonatomic) NSDate *earliestDate; // ivar: _earliestDate
@property (readonly, nonatomic) NSSet *featureNames;
@property (readonly, nonatomic) NSDate *latestDate; // ivar: _latestDate
@property (readonly, nonatomic) NSInteger maxRefCount; // ivar: _maxRefCount
@property (readonly, nonatomic) CGFloat medianRefCount; // ivar: _medianRefCount
@property (readonly, nonatomic) NSInteger minRefCount; // ivar: _minRefCount
@property (readonly, nonatomic) NSUInteger recordCount; // ivar: _recordCount
@property (readonly, nonatomic) NSInteger uniqueBundleIdCount; // ivar: _uniqueBundleIdCount
@property (readonly, nonatomic) NSInteger uniqueDocIdCount; // ivar: _uniqueDocIdCount


-(id)featureValueForName:(id)arg0 ;
-(id)initWithMinRefCount:(NSInteger)arg0 maxRefCount:(NSInteger)arg1 avgRefCount:(CGFloat)arg2 medianRefCount:(CGFloat)arg3 earliestDate:(id)arg4 latestDate:(id)arg5 uniqueBundleIdCount:(NSInteger)arg6 uniqueDocIdCount:(NSInteger)arg7 recordCount:(NSUInteger)arg8 ;
-(id)toDictionary;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXCOREANALYTICSMODEDNDDIMENSIONS_H
#define ATXCOREANALYTICSMODEDNDDIMENSIONS_H

@class ATXCoreAnalyticsDimensionSet, NSNumber, NSString;



@interface ATXCoreAnalyticsModeDNDDimensions : ATXCoreAnalyticsDimensionSet

@property (readonly, nonatomic) NSNumber *isDND; // ivar: _isDND
@property (readonly, nonatomic) NSString *mode; // ivar: _mode


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)coreAnalyticsDictionary;
-(id)initWithMode:(id)arg0 isDND:(BOOL)arg1 ;
-(id)initWithMode:(id)arg0 nullableIsDND:(id)arg1 ;
-(id)powerset;


@end


#endif
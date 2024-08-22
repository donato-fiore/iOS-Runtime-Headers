// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXMODEDIMENSIONSET_H
#define ATXMODEDIMENSIONSET_H

@class ATXCoreAnalyticsDimensionSet, NSString;



@interface ATXModeDimensionSet : ATXCoreAnalyticsDimensionSet

@property (readonly, nonatomic) NSString *mode; // ivar: _mode


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)coreAnalyticsDictionary;
-(id)initWithMode:(id)arg0 ;
-(id)powerset;


@end


#endif
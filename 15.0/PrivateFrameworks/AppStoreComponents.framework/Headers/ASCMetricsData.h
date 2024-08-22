// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASCMETRICSDATA_H
#define ASCMETRICSDATA_H

@class NSSet, NSDictionary, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASCMetricsData : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSSet *excludingFields; // ivar: _excludingFields
@property (readonly, copy, nonatomic) NSDictionary *fields; // ivar: _fields
@property (readonly, copy, nonatomic) NSSet *includingFields; // ivar: _includingFields
@property (readonly, nonatomic) BOOL shouldFlush; // ivar: _shouldFlush
@property (readonly, copy, nonatomic) NSString *topic; // ivar: _topic


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTopic:(id)arg0 shouldFlush:(BOOL)arg1 fields:(id)arg2 includingFields:(id)arg3 excludingFields:(id)arg4 ;
-(id)metricsDataByMergingFields:(id)arg0 uniquingFieldsWithBlock:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
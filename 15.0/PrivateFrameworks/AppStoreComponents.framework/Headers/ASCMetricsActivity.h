// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASCMETRICSACTIVITY_H
#define ASCMETRICSACTIVITY_H

@class NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASCMetricsActivity : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSDictionary *fields; // ivar: _fields


+(BOOL)supportsSecureCoding;
+(id)defaultFields;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFields:(id)arg0 ;
-(id)metricsActivityByMergingFields:(id)arg0 uniquingFieldsWithBlock:(id)arg1 ;
-(id)metricsActivityByRemovingValueForKey:(id)arg0 ;
-(id)metricsActivityWithValue:(id)arg0 forKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
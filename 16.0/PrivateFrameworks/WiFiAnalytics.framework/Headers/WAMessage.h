// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WAMESSAGE_H
#define WAMESSAGE_H

@class NSMutableDictionary, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WAMessage : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSMutableDictionary *metricInfo; // ivar: _metricInfo
@property (copy, nonatomic) NSString *metricName; // ivar: _metricName
@property (nonatomic) NSInteger options; // ivar: _options


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMetricName:(id)arg0 options:(NSInteger)arg1 ;
-(void)addFieldForKey:(id)arg0 value:(id)arg1 options:(NSInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
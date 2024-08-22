// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INWELLNESSOBJECTRESULTVALUE_H
#define INWELLNESSOBJECTRESULTVALUE_H

@class NSString, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INDateComponentsRange.h"

@interface INWellnessObjectResultValue : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) INDateComponentsRange *recordDate; // ivar: _recordDate
@property (readonly, nonatomic) NSInteger resultType; // ivar: _resultType
@property (readonly, copy, nonatomic) NSString *unit; // ivar: _unit
@property (readonly, copy, nonatomic) NSArray *values; // ivar: _values


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_dictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecordDate:(id)arg0 unit:(id)arg1 values:(id)arg2 resultType:(NSInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
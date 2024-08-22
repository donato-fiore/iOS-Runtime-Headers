// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPBEACONINGKEY_H
#define SPBEACONINGKEY_H

@class NSDateInterval, NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPBeaconingKey : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (copy, nonatomic) NSData *key; // ivar: _key
@property (nonatomic) NSUInteger primaryIndex; // ivar: _primaryIndex
@property (nonatomic) NSUInteger secondaryIndex; // ivar: _secondaryIndex
@property (copy, nonatomic) NSData *secondaryKey; // ivar: _secondaryKey


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDateInterval:(id)arg0 key:(id)arg1 ;
-(id)initWithDateInterval:(id)arg0 key:(id)arg1 secondaryKey:(id)arg2 primaryIndex:(NSUInteger)arg3 secondaryIndex:(NSUInteger)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
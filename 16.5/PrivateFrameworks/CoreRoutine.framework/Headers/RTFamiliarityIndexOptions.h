// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RTFAMILIARITYINDEXOPTIONS_H
#define RTFAMILIARITYINDEXOPTIONS_H

@class NSDateInterval;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface RTFamiliarityIndexOptions : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (readonly, nonatomic) NSUInteger spatialGranularity; // ivar: _spatialGranularity


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDateInterval:(id)arg0 spatialGranularity:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
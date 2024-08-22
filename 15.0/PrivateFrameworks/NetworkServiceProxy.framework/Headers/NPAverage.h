// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPAVERAGE_H
#define NPAVERAGE_H

@class NSMutableArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NPAverage : NSObject <NSSecureCoding>



@property (readonly) NSUInteger average;
@property (readonly) BOOL isAnyValid;
@property (readonly) BOOL isLastValid;
@property (retain) NSMutableArray *samples; // ivar: _samples
@property NSUInteger size; // ivar: _size


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSampleSize:(NSUInteger)arg0 ;
-(id)shortDescription;
-(void)addSample:(NSUInteger)arg0 ;
-(void)addSamples:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
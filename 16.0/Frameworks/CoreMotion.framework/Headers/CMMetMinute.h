// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMMETMINUTE_H
#define CMMETMINUTE_H

@class NSDate, NSNumber;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CMMetMinute : NSObject <NSSecureCoding, NSCopying>

 {
    NSDate *fStartDate;
    NSNumber *fAverageIntensity;
}


@property (readonly, nonatomic) NSNumber *averageIntensity;
@property (readonly, nonatomic) NSDate *startDate;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSample:(struct CLMetMinute )arg0 ;
-(id)initWithStartDate:(id)arg0 averageIntensity:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
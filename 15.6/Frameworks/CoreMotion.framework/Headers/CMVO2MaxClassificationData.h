// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMVO2MAXCLASSIFICATIONDATA_H
#define CMVO2MAXCLASSIFICATIONDATA_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CMVO2MaxClassificationData : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSInteger ageLowerBound; // ivar: _ageLowerBound
@property (readonly, nonatomic) NSInteger ageUpperBound; // ivar: _ageUpperBound
@property (readonly, nonatomic) NSInteger biologicalSex; // ivar: _biologicalSex
@property (readonly, nonatomic) NSInteger classificationType; // ivar: _classificationType
@property (readonly, nonatomic) CGFloat vo2MaxLowerBound; // ivar: _vo2MaxLowerBound
@property (readonly, nonatomic) CGFloat vo2MaxUpperBound; // ivar: _vo2MaxUpperBound


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBiologicalSex:(NSInteger)arg0 ageLowerBound:(NSInteger)arg1 ageUpperBound:(NSInteger)arg2 classificationType:(NSInteger)arg3 vo2MaxLowerBound:(CGFloat)arg4 vo2MaxUpperBound:(CGFloat)arg5 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
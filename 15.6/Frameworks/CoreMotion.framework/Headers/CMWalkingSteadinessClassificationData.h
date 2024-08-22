// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMWALKINGSTEADINESSCLASSIFICATIONDATA_H
#define CMWALKINGSTEADINESSCLASSIFICATIONDATA_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CMWalkingSteadinessClassificationData : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSInteger classificationType; // ivar: _classificationType
@property (readonly, nonatomic) CGFloat lowerBound; // ivar: _lowerBound
@property (readonly, nonatomic) CGFloat upperBound; // ivar: _upperBound


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLowerBound:(CGFloat)arg0 upperBound:(CGFloat)arg1 classificationType:(NSInteger)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
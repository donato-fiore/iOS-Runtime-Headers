// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHSSIZECONFIGURATION_H
#define CHSSIZECONFIGURATION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CHSSizeConfiguration : NSObject <NSSecureCoding>



@property (readonly, nonatomic) CGSize largeSize; // ivar: _largeSize
@property (readonly, nonatomic) CGSize mediumSize; // ivar: _mediumSize
@property (readonly, nonatomic) CGSize smallSize; // ivar: _smallSize


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSmallSize:(struct CGSize )arg0 mediumSize:(struct CGSize )arg1 largeSize:(struct CGSize )arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
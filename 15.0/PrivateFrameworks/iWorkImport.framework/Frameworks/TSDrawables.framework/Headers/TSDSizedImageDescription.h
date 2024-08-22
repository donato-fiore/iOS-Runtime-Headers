// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDSIZEDIMAGEDESCRIPTION_H
#define TSDSIZEDIMAGEDESCRIPTION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSDSizedImageDescription : NSObject <NSCopying>



@property (readonly, nonatomic) BOOL hasBakedMask; // ivar: _hasBakedMask
@property (readonly, nonatomic) BOOL isWideGamut; // ivar: _isWideGamut
@property (readonly, nonatomic) CGSize size; // ivar: _size


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSizedImageDescription:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSize:(struct CGSize )arg0 isWideGamut:(BOOL)arg1 hasBakedMask:(BOOL)arg2 ;


@end


#endif
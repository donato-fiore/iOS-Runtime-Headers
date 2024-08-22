// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EFPAIR_H
#define EFPAIR_H

@protocol NSCopying, NSObject;

#import <Foundation/Foundation.h>


@interface EFPair : NSObject <NSCopying>



@property (readonly, nonatomic) NSObject<NSObject> *first; // ivar: _first
@property (readonly, nonatomic) NSObject<NSObject> *second; // ivar: _second


+(id)pairWithFirst:(id)arg0 second:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPair:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithFirst:(id)arg0 second:(id)arg1 ;


@end


#endif
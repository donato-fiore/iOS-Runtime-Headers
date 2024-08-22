// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PASTUPLE2_H
#define _PASTUPLE2_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _PASTuple2 : NSObject <NSCopying>



@property (readonly, nonatomic) NSObject *first; // ivar: _first
@property (readonly, nonatomic) NSObject *second; // ivar: _second


+(id)tupleWithFirst:(id)arg0 second:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTuple2:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithFirst:(id)arg0 second:(id)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FPPAIR_H
#define FPPAIR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface FPPair : NSObject <NSCopying>



@property (retain, nonatomic) id *first; // ivar: _first
@property (retain, nonatomic) id *second; // ivar: _second


+(id)pairWithFirst:(id)arg0 second:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPair:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif
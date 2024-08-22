// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSUPAIR_H
#define TSUPAIR_H

@protocol NSCopying, NSMutableCopying, NSCoding;

#import <Foundation/Foundation.h>


@interface TSUPair : NSObject <NSCopying, NSMutableCopying, NSCoding>

 {
    id *mFirst;
    id *mSecond;
}




+(id)pair;
+(id)pairWithFirst:(id)arg0 second:(id)arg1 ;
+(id)pairWithPair:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)first;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFirst:(id)arg0 second:(id)arg1 ;
-(id)initWithPair:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)second;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)p_SetFirst:(id)arg0 ;
-(void)p_SetSecond:(id)arg0 ;


@end


#endif
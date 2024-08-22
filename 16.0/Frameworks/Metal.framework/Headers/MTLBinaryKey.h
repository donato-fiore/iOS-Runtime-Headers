// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLBINARYKEY_H
#define MTLBINARYKEY_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTLBinaryKey : NSObject <NSCopying>

 {
    *MTLFunctionId _id;
}


@property (readonly) *? value;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToKey:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithHash:(struct MTLMultiHashKey *)arg0 ;
-(struct MTLFunctionId *)getFunctionId;
-(void)dealloc;


@end


#endif
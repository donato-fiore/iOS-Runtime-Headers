// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLBINARYKEY_H
#define MTLBINARYKEY_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTLBinaryKey : NSObject <NSCopying>

 {
    ? _hash;
}


@property (readonly) *? value;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToKey:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithHash:(struct ? *)arg0 ;


@end


#endif